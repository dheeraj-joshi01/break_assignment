/****************************/
#include<iostream>
using namespace std; 

class Matrix
{
        int  m1[100][100], m2[100][100], m3[100][100],m4[100][100];
        int  i, j, r, c ,k;
        public :
        void getRows()
        {
             cout<<"Enter the no.of rows :";
            cin>>r; 
        }
        void getCols()
        {
            cout<<"Enter the no.of columns :";
            cin>>c;
        }
        
        void set_element()
        {
            cout<<"\n1st Matrix Input:\n";
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    cout<<"\nmatrix1["<<i<<"]["<<j<<"]=  ";
                    cin>>m1[i][j];
                }
            }
            
            cout<<"\n2nd Matrix Input:\n";
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    cout<<"\nmatrix2["<<i<<"]["<<j<<"]=  ";
                    cin>>m2[i][j];
                }
            } 
            
        }
        
        void add()
        {
            //Adding Matrices
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    m3[i][j]=m1[i][j]+m2[i][j];
                }
            } 
       
            cout<<"\nAddition of the Matrix is:\n";
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    cout<<"\t"<<m3[i][j];
                }
            cout<<endl;
            } 
            
        }
        
        void multiply()
        {
            cout<<"\nmultiply of the Matrix is:\n";
            for(i=0;i<r;i++)    
            {    
                for(j=0;j<c;j++)    
                {    
                    m4[i][j]=0;    
                    for(k=0;k<c;k++)    
                    {    
                        m4[i][j]+=m1[i][k]*m2[k][j];    
                    }    
                }    
            }  
              
            //for printing result    
            for(i=0;i<r;i++)    
            {    
                for(j=0;j<c;j++)    
                {    
                    cout<<"\t"<<m4[i][j];
                }    
                cout<<endl;    
            }
        }
    
};




int main() 
{  
    Matrix mat;
    mat.getRows();
    mat.getCols();
    mat.set_element();
    mat.add();
    mat.multiply();
    
}
