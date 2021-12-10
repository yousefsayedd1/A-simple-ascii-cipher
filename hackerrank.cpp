#include <iostream>
#include <fstream>
#include<string>
using namespace std;

void write();
void read();

int main(){ 
    int c;

    // show menu
    cout<<"1:Write"<<endl;
    cout<<"2:read"<<endl;
    //Pick number 1 for write, 2 for read
    cout<<"Pick a number plz : ";
        cin>>c;
        
    
    // do the number job
    if (c==1)
      {
         write();
    }

   else if (c==2)
    {
    read();
 }
    
    return 0;
}
//Write in file
void write(){
    // open file
    fstream myfile;
    myfile.open("file.txt",ios::app);
    // input a  in file
    if (myfile.is_open())
    {
        string a; 
        cout<<"tell me your secret : "<<endl;
    
        std::getline(cin>>ws,a);

      

        for (int i = 0; i < a.length(); i++)
            {
                // put space after every letter
                myfile<<int (a[i])<<" ";
                // put "." in the end of line
                if (i+1==a.length())
                {
                    myfile<<".";
                }
        
            }
        // be ready in the nixt line
        myfile<< endl;

    
   
    }
    // close the file
    myfile.close();
}

// read from the file
void read(){
    fstream myfile;
    string line;
    //open the file in read mode
    myfile.open("file.txt",ios::in);
    // while the file dosen't end
    while (!myfile.eof())
    {
      
        // bring a letter from the file
        myfile>>line;
        int num;
        // if the letter is "." continue in the nixt line
        if (line ==".")
        {
            cout<<endl;
        }
        // else print the letter in the same line
        else{
        // convert the number form string form to intger form
        num=stoi(line);
        // Print the number in string form
        cout<<char (num);
        }
    }
    // Close the file
    myfile.close();
    
}