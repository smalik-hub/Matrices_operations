/*
 * Matrices.h
 *
 *  Created on: 2018-02-23
 *      Author: Shahzaib Malik
 */

#ifndef MATRICES_MATRICES_H_
#define MATRICES_MATRICES_H_

#include <iostream>
using namespace std;

class Matrix{

public:

#define row 100
#define column 100



double matrixadd(){

	    int A[row][column],B[row][column],C[row][column];
		int i, j, m , n , p , q;

		cout<<"Enter the number of rows first matrix:"<<" ";
		cin>>m;
		cout<<"Enter the number of columns first matrix:"<<" ";
		cin>>n;
		cout<<"Enter the number of rows of second matrix:"<<" ";
		cin>>p;
		cout<<"Enter the number of columns of second matrix:"<<" ";
		cin>>q;

		if (m==p && n==q){

			cout<<"Enter the first matrix one row at a time:"<<" ";
		     for(i=0;i<m;i++)
				for (j=0;j<n;j++)

			    cin>>A[i][j];

		     cout<<"Enter the second matrix one row at a time:"<<" ";
		     for(i=0;i<p;i++)
		   		for (j=0;j<q;j++)

		   	    cin>>B[i][j];

		     cout<<"The new matrix is:"<<endl;
		     const std::string green("\033[1;32m");
		    for (i=0;i<m;i++){
		    	for (j=0;j<q;j++){
		    C[i][j]=(A[i][j]+B[i][j]);
		    const std::string green("\033[1;32m");
		    cout<< green <<(C[i][j])<<" ";
		    	}
		    cout<<"\n";
		    	}

		    const std::string reset("\033[0m");
		    cout<<reset;
		}
		else
			cout<<"Invalid operation"<<endl;
		return 0;

}

double matrixmultiply(){

	int A[row][column],B[row][column],C[row][column];
	int i, j, k, m , n , p , q;

	cout<<"Enter the number of rows first matrix:"<<" ";
	cin>>m;
	cout<<"Enter the number of columns first matrix:"<<" ";
	cin>>n;
	cout<<"Enter the number of rows of second matrix:"<<" ";
	cin>>p;
	cout<<"Enter the number of columns of second matrix:"<<" ";
	cin>>q;

	if (n==p){

		cout<<"Enter the first matrix one row at a time:"<<" ";
	     for(i=0;i<m;i++)
			for (j=0;j<n;j++)

		    cin>>A[i][j];

	     cout<<"Enter the second matrix one row at a time:"<<" ";
	     for(i=0;i<p;i++)
	   		for (j=0;j<q;j++)

	   	    cin>>B[i][j];

	     cout<<"The new matrix is:"<<endl;
	     const std::string green("\033[1;32m");
	    for (i=0;i<m;i++){
	    	for (j=0;j<q;j++){
	    		for (k=0;k<n;k++)
	    C[i][j]=C[i][j]+(A[i][k]*B[k][j]);    //Write down matrix of any order & check if this line confuses you...[i]=rows of A,[k]=columns of A,[k]=rows of B,[j]=columns of B
	    const std::string green("\033[1;32m");
	    cout<< green <<(C[i][j])<<" ";
	    	}
	    cout<<"\n";
	    	}

	    const std::string reset("\033[0m");
	    cout<<reset;
	}
	else
		cout<<"The required order of matrix multiplication is wrong"<<endl;
	return 0;


}


};


#endif /* MATRICES_MATRICES_H_ */
