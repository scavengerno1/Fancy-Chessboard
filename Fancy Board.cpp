#include <iostream>
using namespace std;

int main()
{
	int i,j,k,l;
	
	typedef char box[5][7];
	box wq, bq, bb, wb, *board[8][8];
	
	//Fill in black and white boxes
	for(i=0;i<5;i++)
		for(j=0;j<7;j++)
		{
			wb[i][j]=' ';
			bb[i][j]=char(219);
		}
	
	//fill board with pointers to bb and wb in alternate positions
	for(i=0;i<8;i++)	
		for(j=0;j<8;j++)
		{
			if((i+j)%2==1)
				board[i][j]= &wb;
			else
				board[i][j]= &bb;
		}
	
	//print upper board
	cout << " ";
	for(i=0;i<7*8;i++)
		cout << '_';
	cout << endl;
	
	//print board
	for(i=0;i<8;i++)
		for(k=0;k<5;k++){
			cout << " " << char(179);
			for(j=0;j<8;j++)
				for(l=0;l<7;l++)
					cout << (*board[i][j])[k][l];
			cout << char(179) << endl;
		}
	
	//print lower board
	cout << " ";
	for(i=0;i<7*8;i++)
		cout << char(196);
	cout << endl;
	
	return 0;
}
