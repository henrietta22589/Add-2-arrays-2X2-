/******************************************************************************
/*Εδώ θα γίνει η πρόσθέση 2 πινάκων 2Χ2. Στην γραμμίκη Αλγέβρα για να πρόστεθούνε δύο πίνακες πρέπει 
να έχουνε τις ίδιες διαστάσεις, δήλαδή ίδιες γραμμές και ίδιες στήλες*/
#include <iostream>
using namespace std;
int main()
{
/*Εδώ δημιουργούμε την μεταβλήτη i που θα χρησιμοποιείται για τις γραμμές του πίνακα*/
/*Εδώ δημιουργούμε την μεταβλήτη j που θα χρησιμοποιείται για τις στήλες του πίνακα*/
    int i,j,num_lines_1,num_columns_1,num_lines_2,num_columns_2,option;
/*Εδώ ενημερώνουμε τον χρήστη μέσω ένος μηνύματος, ότι για να πρόστεθούνε οι πίνακες*/
/*πρέπει να έχουνε την ίδια διάσταση*/
/*Αν έχουνε διαφορετική διάσταση, δεν θα μπορεί ο χρήστης να υλοποιήσει την πρόσθεση */
/*των δύο πινάκων, θα επαναλαμβάνεται επ’απείρον το μήνυμα δώσε αριθμό γραμμών και αριθμό στηλών
εώς ότου ο αριθμός γραμμών του 1ου πίνακα να είναι ίσος με τον αριθμό γραμμών του δευτέρου πίνακα
όπως και ακρίβως το ίδιο για τις στήλες των πινάκων */
/*Η επαναλλήπτική δομή θα δημιουργήθει μέσω της do-while */
cout<<"In order two arrays to be added, the should have the same dimensions"<<endl;
cout<<"For example lines_1array=lines_2array  AND"<<endl<<"columns_1array=columns_2array";
do
{
/*Εδώ ζητάμε απο τον χρήστη να μας δώσει των αριθμό γραμμών για τον πρωτο πίνακα*/
    cout<<endl<<endl<<"Give me the numbers of lines you would like the first array to have ";
    cin>>num_lines_1;
/*Εδώ ζητάμε απο τον χρήστη να μας δώσει των αριθμό στηλών για τον πρωτο πίνακα*/
    cout<<"Give me the numbers of columns you would like the first array to have ";
    cin>>num_columns_1;
/*Εδώ ζητάμε απο τον χρήστη να μας δώσει των αριθμό γραμμών για τον δευτέρο  πίνακα*/    
    cout<<"Give me the numbers of lines you would like the second array to have ";
    cin>>num_lines_2;
/*Εδώ ζητάμε απο τον χρήστη να μας δώσει των αριθμό στηλών για τον δευτέρο  πίνακα*/    
    cout<<"Give me the numbers of columns you would like the second array to have ";
    cin>>num_columns_2;
}while((num_lines_1!=num_lines_2) && (num_columns_1!=num_columns_2));
/*Δημιουργία των δύο πινάκων, με βάση τα δεδομένα που πήραμε απο τον χρήστη*/
float array_1[num_lines_1][num_columns_1],array_2[num_lines_2][num_columns_2];
/*Πάμε να πάρουμε τα δεδομένα απο τον χρήστη για να δημιουργήθει ο πρώτος πίνακας*/
for(i=0;i<num_lines_1;i++)
{
    for(j=0;j<num_columns_1;j++)
    {
        cout<<"What value you would like to give fo this element of the array "<<i<<j<<" ";
        cin>>array_1[i][j];
    }
}
/*Εδώ θα γίνει γίνει η εκτύπωση των στοιχείων του πίνακα για τον χρήστη*/
cout<<"The first array is: ";
for(i=0;i<num_lines_1;i++)
{ 
    cout<<endl;
    for(j=0;j<num_columns_1;j++)
    {
        cout<<" ";
        cout<<array_1[i][j];
        
    }
}
/*Εδώ γίνεται μία ερώτηση στον χρήστη αν τον ικανοποιεί ο πίνακας που δημιουργήσε*/
/*Αν του άρεσε ο πίνακας,να πατήσει 1 αν δεν του άρεσε να πατήσει 0 για να ξεκινήσει το πρόγραμμα εκ νέου*/
cout<<endl<<"Is this the array you would like? If yes press 1 if no, press 0 and you will be able"<<endl;
cout<<endl<<"To form the array from the start";
cin>>option;
/*Αν ο χρήστης πατήσει ως επιλογή 0 βγαίνει απο το πρόγραμμα και ξεκινάει εκ νέου να εισάγει στοιχεία
// για τους πίνακες-Επιλέξα το Switch δίοτι μέ την IF είχα θέμα με το break statement*/
switch (option)
{
    case 1:
/*Πάμε να πάρουμε τα δεδομένα απο τον χρήστη για να δημιουργήθει ο δευτέρος πίνακας*/
for(i=0;i<num_lines_2;i++)
{
    for(j=0;j<num_columns_2;j++)
    {
        cout<<"What value you would like to give fo this element of the array "<<i<<j<<" ";
        cin>>array_2[i][j];
    }
}
/*Εδώ θα γίνει γίνει η εκτύπωση των στοιχείων του πίνακα για τον χρήστη*/
cout<<"The second array is: ";
for(i=0;i<num_lines_2;i++)
{ 
    cout<<endl;
    for(j=0;j<num_columns_2;j++)
    {
        cout<<" ";
        cout<<array_2[i][j];
    }
}
      case 2:
            break;
    }
/*Πρόσθεση των δύο πινάκων. Είτε οριοθετηθεί με num_lines_1 είτε με num_lines_2 είναι το ένα και το αυτό
μιας και num_lines_1=num_lines_2.To ίδιο ακριβώς ισχύει και για num_columns_1=num_columns_2*/
float sum[num_lines_1][num_columns_1]={{0}};
for(i=0;i<num_lines_1;i++)
{ 
    for(j=0;j<num_columns_1;j++)
    {
        sum[i][j]=array_1[i][j]+array_2[i][j];
    }
}
for(i=0;i<num_lines_1;i++)
{
    cout<<endl;/*Για να στοιχιστούν σωστά τα στοιχεία του πίνακα*/
    for(j=0;j<num_columns_1;j++)
    {
        cout<<" ";/*Για να υπάρχει ένα κενό ανάμεσα στα στοιχεία του πίνακα*/
        cout<<endl<<"The new array in the point "<<i<<","<<j<<" is "<<sum[i][j];
    }
}
return 0;
}