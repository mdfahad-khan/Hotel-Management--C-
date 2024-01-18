#include<bits\stdc++.h>
using namespace std;
 int main()
 {
     int quant;
     int choice;
      int Qrooms=0, Qpasta=0,Qburger=0, Qnoodles=0,Qshake =0,Qchicken =0;

      int Sroom=0, Spasta=0, Sburger=0, Snoodles=0,Sshake=0,Schicken=0;

      int Total_rooms=0,Total_pasta=0,Total_burger=0,Total_noodles=0,Total_shake=0,Total_chicken=0;

     cout<<"\n\t Quantity of items we have : ";
     cout<<"\n\t Rooms available: ";
     cin>>Qrooms;
     cout<<"\n\t Quantity of pasta :";
     cin>>Qpasta;
     cout<<"\n\t Quantity of burger :";
     cin>>Qburger;
     cout<<"\n\t Quantity of noodles: ";
     cin>>Qnoodles;
     cout<<"\n\t Quantity of shake :";
     cin>>Qshake;
     cout<<"\n\t Quantity of chicken :";
     cin>>Qchicken;
     m:
     cout<<"\n\t\t\t Please select from the menu options ";
     cout<<"\n\n 1)Rooms";
     cout<<"\n  2)pasta";
     cout<<"\n\n 3)burger";
     cout<<"\n  4)noodles";
     cout<<"\n\ 5)shake";
     cout<<"\n  6)Chicken";
      cout<<"\n\ 7) Information regarding sales and collection ";
     cout<<"\n  8)Exit";
     cout<<"\n\n Please enter your choice ";
     cin>>choice;

     switch(choice)
     {
     case 1:
         {
              cout<<"Enter the number of rooms do you wants : ";
              cin>>quant;
              if(Qrooms-Sroom>=quant)
              {
                 Sroom=Sroom+quant;
                 Total_rooms=Total_rooms+quant*1200;
                 cout<<"\n\t\t"<<quant<<"rooms have been alloted to you \n";

              }
              else{
                cout<<"\n\t Only"<<Qrooms-Sroom<<"Rooms reaming in hotel";

              }

                break;

         }
    case 2:
         {
              cout<<"Enter the number of pasta do you wants : ";
              cin>>quant;
              if(Qpasta-Spasta>=quant)
              {
                 Spasta+=quant;
                 Total_pasta=Total_pasta+quant*130;
                 cout<<"\n\t\t"<<quant<<"pasta is the order  ";

              }
              else{
                cout<<"\n\t Only"<<Qpasta-Spasta<<"pasta reaming in hotel";
                break;
              }

         }
         case 3:
         {
              cout<<"Enter the number of burger do you wants : ";
              cin>>quant;
              if(Qburger-Sburger>=quant)
              {
                 Sburger+=quant;
                 Total_burger=Total_burger+quant*150;
                 cout<<"\n\t\t"<<quant<<"burger is the order  ";

              }
              else{
                cout<<"\n\t Only"<<Qburger-Sburger<<"burger reaming in hotel";
                break;
              }

         }
         case 4:
         {
              cout<<"Enter the number of noodles do you wants : ";
              cin>>quant;
              if(Qnoodles-Snoodles>=quant)
              {
                 Snoodles+=quant;
                 Total_noodles=Total_noodles+quant*120;
                 cout<<"\n\t\t"<<quant<<"noodles is the order  ";

              }
              else{
                cout<<"\n\t Only"<<Qnoodles-Snoodles<<"noodles reaming in hotel";
                break;
              }

         }
         case 5:
         {
              cout<<"Enter the number of Shake do you wants : ";
              cin>>quant;
              if(Qshake-Sshake>=quant)
              {
                 Sshake+=quant;
                 Total_shake=Total_shake+quant*140;
                 cout<<"\n\t\t"<<quant<<"shake is the order  ";

              }
              else{
                cout<<"\n\t Only"<<Qshake-Sshake<<"shake reaming in hotel";
                break;
              }

         }
         case 6:
         {
              cout<<"Enter the number of chicken do you wants : ";
              cin>>quant;
              if(Qchicken-Schicken>=quant)
              {
                 Schicken+=quant;
                 Total_chicken=Total_chicken+quant*200;
                 cout<<"\n\t\t"<<quant<<"chicken is the order  ";

              }
              else{
                cout<<"\n\t Only"<<Qchicken-Schicken<<"chicken reaming in hotel";
                break;
              }


         }
          case 7:
            {
                cout<<"\n\tDetails of sales and collection ";

                cout<<"\n\n Number of rooms we had :"<<Qrooms;
                cout<<"\n\n Number of rooms we gave for rent "<<Sroom;
                cout<<"\n\n Remaining rooms : "<<Qrooms-Sroom;
                cout<<"\n\n Total rooms collection for a day :"<<Total_rooms;

                cout<<"\n\n Number of pasta we had :"<<Qpasta;
                cout<<"\n\n Number of pasta we gave for rent "<<Spasta;
                cout<<"\n\n Remaining pasta : "<<Qpasta-Spasta;
                cout<<"\n\n Total pasta collection for a day :"<<Total_pasta;


                cout<<"\n\n Number of burger we had :"<<Qburger;
                cout<<"\n\n Number of burger we gave for rent "<<Sburger;
                cout<<"\n\n Remaining burger : "<<Qburger-Sburger;
                cout<<"\n\n Total burger collection for a day :"<<Total_burger;

                cout<<"\n\n Number of noodles we had :"<<Qnoodles;
                cout<<"\n\n Number of noodles we gave for rent "<<Snoodles;
                cout<<"\n\n Remaining noodles : "<<Qnoodles-Snoodles;
                cout<<"\n\n Total noodles collection for a day :"<<Total_noodles;

                cout<<"\n\n Number of shake we had :"<<Qshake;
                cout<<"\n\n Number of shake  we gave for rent "<<Sshake;
                cout<<"\n\n Remaining shake  : "<<Qshake-Sshake;
                cout<<"\n\n Total shake  collection for a day :"<<Total_shake;

                 cout<<"\n\n Number of chicken we had :"<<Qchicken;
                cout<<"\n\n Number of chicken  we gave for rent "<<Schicken;
                cout<<"\n\n Remaining chicken  : "<<Qchicken-Schicken;
                cout<<"\n\n Total chicken  collection for a day :"<<Total_chicken;
                break;
            }
          case 8:
            exit(0);
          default:
            cout<<"\n\n Please the numbers mentioned above";





     }
     goto m;



     return 0;
 }
