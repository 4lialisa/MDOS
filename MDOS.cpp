// Wan Izz Dhia Akashah bin Wan Mohd Salihin (1211103651)
// Insyirah Najihah binti Abdul Rahim (1211101523)
// Noor Alia Alisa binti Kamal ((1211103754)
// Nur Maisarah binti Mohammad Saifrol (1211100633)
// Lee Shun Jie (1211101529)

//Date: 30/03/2022
//Description: Multimedia Design Ordering System (Group 10)

#include <iostream.>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


using namespace std;


int main()

{   string name, email, phone_num;
    string  first_line_address, second_line_address;
    string project_title, theme, venue, time, other_details;
    string file_format , source_format ;
    float  price_package, size_price,  delivery_cost;
    char gotobeginning;

    float pchoice6_H;
    float pchoice6_L;
    float price_L;
    float price_H;
         int num_copies ;


         char district;
         float km,  cost_per_km = 0.50;



	char gotobanner , gotochoice, gotomenu , gotoprinting, optionp2, optionp4, optionp5 = 0, optionp5_1 = 0, optionp6;
	char beginning;
	int choice=0, quantity;
	int num;

    char  printing_material;
	char choicesize, pchoice;
	char package;
	float banner, banner2, printing, payment, kilometers ;
	float delivery;
	float material_price;
	float total_price;



beginning:
        {
         system ("cls");
         system ("color 0E");

         char optionp1;
                {
                    cout << "\n";
                    cout << "|||||||||||||||||||||||||||||||||||||||||||| WELCOME TO MDOS! |||||||||||||||||||||||||||||||||||||||||||||||";

                    cout << "\n\n";
                    cout << (" Please enter your information here");
                    cout << ("\n-------------------------------------");
                    cout << ("\n\n");
                    cout << ("\t __________________________________________\n");
                    cout << ("\t| Example:                                 |\n");
                    cout << ("\t|                                          |\n");
                    cout << ("\t| Name        : Deborah Nunez              |\n");
                    cout << ("\t|                                          |\n");
                    cout << ("\t| Email       : d.sample@gmail.com         |\n");
                    cout << ("\t|                                          |\n");
                    cout << ("\t| Phone number: +60123456789               |\n");
                    cout << ("\t|                                          |\n");
                    cout << ("\t| Please enter a valid contact information,|\n");
                    cout << ("\t| otherwise your order will be dropped.    |\n");
                    cout << ("\t|__________________________________________|\n\n");


                    cout << (" Name         : ");
                    cin.ignore();
                    getline(cin, name);


                    cout << (" Email        :  ");
                    cin >> email;


                    cout << (" Phone Number :  ");
                    cin >> phone_num;


                    cout << ("\n\n ");
                    cout << ("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n");
                    cout << " Would you like to proceed? \n Yes (Y) / No (N) : ";
                    cin >> optionp1;

                           if (optionp1 == 'Y'  || optionp1 == 'y')
                              goto menu;

                           else if (optionp1 == 'N' || optionp1 == 'n')
                              goto beginning;

                           else
                              cout << "Wrong Input!";
                              goto beginning;


                }
        }

menu:
      {
          system ("color 0B");
          system ("cls");
          string name;
          char code = 0;

          char optionp2;
                  {
                    cout << ("\n||||||||||||||||||||||||||||||||||||||||||||||| M E N U  P A G E |||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n");
                    cout << "\t\t\t\t\t1. >>> Banner\n";
                    cout << "\n";
                    //cout << "\t\t\t\t\t2. >>> Flyer \n";
                    cout << "\n\n\n";
                    cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
                    cout << "\n";
                    cout << " Hello ! ";
                    cout << "\n Please Enter Your Choice [ Only option 1 is available at the moment]: ";
                    cin >> code;
                           while (code != '1')
                                            {cout << " Wrong Input. Please enter again [ 1 | 2 ]: ";
                                            cin >> code;}




                                        if (code == '1')
                                          {
                                            cout << "\n\n You are choosing Banner. \n Would you like to proceed? \n Yes (Y) / No (N) : ";
                                            cin >> optionp2;
                                                   {
                                                     if (optionp2 =='Y' || optionp2 =='y')
			                                             goto banner;
                                                     else
                                                         goto menu;
                                                   }


                              }

                  }

      }


banner:
         {
             system ("color 0A");
             system ("cls");

             float price_package;
             package = 0;

                {
                  cout << "\n |||||||||||||||||||||||||||||||||||||||||||||||||| B A N N E R |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
                  cout << "-------------------------------------------------------------------------------------------------------------------------------\n\n";


                  cout << " Please choose a package. \n";
                  cout << " ---------------------- \n\n";


                  cout <<"\t 1. >>>  "<< "Basic Package [ RM 30 ]" << "\n\n" ,
                  cout <<"\t         "<< "HQ print-ready file (PDF, PNG or JPG), 1 concept, 1 revision, 1 week duration" << "\n\n\n" ;

                  cout <<"\t 2. >>>  "<< "Standard Package [ RM 40 ]" << "\n\n" ,
                  cout <<"\t         "<< "HQ print-ready file + source file (PSD or AI), 2 concepts, 2 revisions, 3 days duration" <<"\n\n\n\n" ;

                  cout <<"\t 3. >>>  "<< "Premium Package [ RM 60 ]" << "\n\n" ,
                  cout <<"\t         "<< "HQ print-ready file + source file (PSD or AI), 3 concepts , 3 revisions, 24 hours duration" <<"\n\n\n" ;


		          cout << "-------------------------------------------------------------------------------------------------------------------------------";
                  cout << "\n What package would you like to have? [ 1 | 2 | 3 ]: ";
                  cin >> package;
                         {
                           if (package == '1')
                               price_package = 30;
                           else if (package == '2')
                               price_package = 40;
                           else if (package == '3')
                               price_package = 60;
                         }

                         if (package == '1'  || package == '2' || package == '3')
                                 cout << "\n\nOK. Input Received." << endl;

                         while (package != '1' && package != '2' && package != '3')
                                {
                                 cout << "Wrong input . Please enter again [ 1 | 2 | 3 ]: " ;
                                 cin >> package;
                                        if (package == '1'  || package == '2' || package == '3')
                                            cout << "\n\nOK. Input Received." << endl;
                                }

                goto size_banner;
              }
         }


size_banner:

    char size1[] = "Small Standard Size"       ,
         size2[] = "Medium Standard Size"      ,
         size3[] = "Large Standard Size"       ,
         size4[] = "Standard Commercial Size"  ,
         size5[] = "Extra-Large Standard Size" ,
         size6[] = "Others"                    ;

    char smallsize1[]= "12 x 12 inch [ RM 10 ]",
         smallsize2[]= "12 x 18 inch [ RM 10 ]",
         smallsize3[]= "12 x 24 inch [ RM 11 ]",
         smallsize4[]= "12 x 30 inch [ RM 11 ]",
         smallsize5[]= "12 x 36 inch [ RM 12 ]",
         smallsize6[]= "12 x 48 inch [ RM 12 ]";

    char m_size1[]= "18 x 18 inch [ RM 15 ]" ,
         m_size2[]= "18 x 24 inch [ RM 16 ]" ,
         m_size3[]= "18 x 30 inch [ RM 17 ]" ,
         m_size4[]= "18 x 36 inch [ RM 18 ]" ,
         m_size5[]= "18 x 48 inch [ RM 19 ]" ,
         m_size6[]= "24 x 36 inch [ RM 20 ]" ,
         m_size7[]= "24 x 48 inch [ RM 21 ]" ,
         m_size8[]= "24 x 72 inch [ RM 22 ]" ,
         m_size9[]= "24 x 96 inch [ RM 23 ]" ;

    char l_size1[]= "36 x 36 inch [ RM 24 ]" ,
         l_size2[]= "36 x 48 inch [ RM 25 ]" ,
         l_size3[]= "36 x 72 inch [ RM 25 ]" ,
         l_size4[]= "36 x 96 inch [ RM 26 ]" ,
         l_size5[]= "48 x 48 inch [ RM 26 ]" ,
         l_size6[]= "48 x 72 inch [ RM 27 ]" ,
         l_size7[]= "48 x 96 inch [ RM 27 ]" ;

    char std_size1[]=  "36 x 120 inch [ RM 28 ]",
         std_size2[]=  "36 x 144 inch [ RM 28 ]",
         std_size3[]=  "36 x 192 inch [ RM 29 ]",
         std_size4[]=  "48 x 120 inch [ RM 29 ]",
         std_size5[]=  "48 x 144 inch [ RM 30 ]",
         std_size6[]=  "48 x 192 inch [ RM 30 ]",
         std_size7[]=  "60 x 120 inch [ RM 31 ]",
         std_size8[]=  "60 x 144 inch [ RM 31 ]",
         std_size9[]=  "60 x 192 inch [ RM 32 ]",
         std_size10[]= "60 x 240 inch [ RM 32 ]";

    char xl_size1[]=  "72 x 72 inch   [ RM 33 ]",
         xl_size2[]=  "72 x 96 inch   [ RM 33 ]",
         xl_size3[]=  "72 x 120 inch  [ RM 34 ]",
         xl_size4[]=  "72 x 144 inch  [ RM 34 ]",
         xl_size5[]=  "72 x 180 inch  [ RM 35 ]",
         xl_size6[]=  "72 x 240 inch  [ RM 35 ]",
         xl_size7[]=  "96 x 96 inch   [ RM 36 ]",
         xl_size8[]=  "96 x 120 inch  [ RM 36 ]",
         xl_size9[]=  "96 x 144 inch  [ RM 37 ]",
         xl_size10[]= "96 x 180 inch  [ RM 37 ]",
         xl_size11[]= "96 x 240 inch  [ RM 38 ]",
         xl_size12[]= "120 x 120 inch [ RM 38 ]",
         xl_size13[]= "120 x 144 inch [ RM 39 ]",
         xl_size14[]= "120 x 180 inch [ RM 39 ]",
         xl_size15[]= "120 x 240 inch [ RM 40 ]";

   choicesize = 0;
   pchoice = 0;

    {
        cout << "\n\n Please choose a size. \n";
        cout << " ---------------------- \n\n";
        cout <<"\t\t\t\t\t 1. >>>  "<< size1 << "\n\n" ;
        cout <<"\t\t\t\t\t 2. >>>  "<< size2 << "\n\n" ;
        cout <<"\t\t\t\t\t 3. >>>  "<< size3 << "\n\n" ;
        cout <<"\t\t\t\t\t 4. >>>  "<< size4 << "\n\n" ;
        cout <<"\t\t\t\t\t 5. >>>  "<< size5 << "\n\n" ;
        cout <<"\t\t\t\t\t 6. >>>  "<< size6 << " (larger than 120 x 240 inch)\n\n" ;


        cout << "----------------------------------------------------------------------------------------------------------------------";
        cout << "\n What size would you like to have? \n [ 1 | 2 | 3 | 4 | 5 | 6 ]: ";
		cin >> choicesize;
		       while (choicesize != '1' && choicesize != '2' && choicesize != '3' && choicesize != '4' && choicesize != '5' && choicesize != '6')
                {
                 cout << "Wrong input . Please enter again [ 1 | 2 | 3 | 4 | 5 | 6 ]: " ;
                 cin >> choicesize;

                }



                  if (choicesize == '1')
                   {
                     cout << "\n\n|||||||||||||||||||||||||||||||||||||||||||||| " << size1 << " ||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n";


                     cout <<"\t\t 1. >>>  "<< smallsize1   , cout <<"\t\t\t 4. >>>  "<< smallsize4 <<"\n\n" ;
                     cout <<"\t\t 2. >>>  "<< smallsize2   , cout <<"\t\t\t 5. >>>  "<< smallsize5 <<"\n\n" ;
		             cout <<"\t\t 3. >>>  "<< smallsize3   , cout <<"\t\t\t 6. >>>  "<< smallsize6 <<"\n\n" ;

		             cout << "-----------------------------------------------------------------------------------------------------------------------";
		             cout <<"\n What size would you like to have? \n [ 1 | 2 | 3 | 4 | 5 | 6 ]: ";
		             cin >> pchoice;
                             {

                             if (pchoice == '1' || pchoice == '2' )
                                size_price = 10.00;

                             else if (pchoice == '3' || pchoice == '4')
                                size_price = 11.00;

                             else if (pchoice == '5' || pchoice == '6')
                                size_price = 12.00;
                             }

		                     while (pchoice != '1' && pchoice != '2' && pchoice != '3' && pchoice != '4' && pchoice != '5' && pchoice != '6' )

                                    {
                                      cout << "Wrong input . Please enter again [ 1 | 2 | 3 | 4 | 5 | 6 ]: " ;
                                      cin >> pchoice;

                                    }

                     cout << ("\n\n ");
                     cout << ("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n");
                     cout << " Would you like to proceed? \n Yes (Y) / No (N) : ";
                     cin >> optionp2;
                            if (optionp2 == 'Y'  || optionp2 == 'y')
                            goto banner2;

                            else if (optionp2 == 'N' || optionp2 == 'n')
                            goto banner;

                            while (optionp2 != 'Y' && optionp2 != 'y' && optionp2 != 'N' && optionp2 != 'n')
                                  {

                                    cout << "Wrong Input";
                                    cout << "\nPlease enter again. Yes (Y) / No (N) : ";
                                    cin >> optionp2;

                                           if (optionp2 == 'Y'  || optionp2 == 'y')
                                           goto banner2;

                                           else if (optionp2 == 'N' || optionp2 == 'n')
                                           goto banner;

                                  }

                  }

                  else if (choicesize == '2')
                          {
                           cout << "\n\n|||||||||||||||||||||||||||||||||||||||||||||| " << size2 << " ||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n";


		                   cout <<"\t\t 1. >>>  "<< m_size1 << "\t" , cout <<"\t\t\t 6. >>>  "<< m_size6 <<"\n\n" ;
                           cout <<"\t\t 2. >>>  "<< m_size2 << "\t" , cout <<"\t\t\t 7. >>>  "<< m_size7 <<"\n\n" ;
		                   cout <<"\t\t 3. >>>  "<< m_size3 << "\t" , cout <<"\t\t\t 8. >>>  "<< m_size8 <<"\n\n" ;
		                   cout <<"\t\t 4. >>>  "<< m_size4 << "\t" , cout <<"\t\t\t 9. >>>  "<< m_size9 <<"\n\n" ;
		                   cout <<"\t\t 5. >>>  "<< m_size5 << "\t\n\n\n" ;

		                   cout << "-----------------------------------------------------------------------------------------------------------------------";
		                   cout << "\n What size would you like to have? [ 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 ]: ";
		                   cin >> pchoice;
		                          while (pchoice != '1' && pchoice != '2' && pchoice != '3' && pchoice != '4' && pchoice != '5' && pchoice != '6' && pchoice != '7'
                                         && pchoice != '8' && pchoice != '9' )

                                         {

                                           cout << "Wrong input . Please enter again [ 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 ]: " ;
                                           cin >> pchoice;

                                         }
                                  if (pchoice == '1' )
                                      size_price = 15.00;

                                  else if (pchoice == '2' )
                                      size_price = 16.00;

                                  else if (pchoice == '3' )
                                      size_price = 17.00;

                                  else if (pchoice == '4' )
                                      size_price = 18.00;

                                  else if (pchoice == '5' )
                                      size_price = 19.00;

                                  else if (pchoice == '6' )
                                      size_price = 20.00;

                                  else if (pchoice == '7' )
                                      size_price = 21.00;

                                  else if (pchoice == '8' )
                                      size_price = 22.00;

                                  else if (pchoice == '9' )
                                      size_price = 23.00;


		                   cout << ("\n\n ");
                           cout << ("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n");
                           cout << " Would you like to proceed? \n Yes (Y) / No (N) : ";
                           cin >> optionp2;
                                  if (optionp2 == 'Y'  || optionp2 == 'y')
                                      goto banner2;

                                  else if (optionp2 == 'N' || optionp2 == 'n')
                                      goto banner;

                                  while (optionp2 != 'Y' && optionp2 != 'y' && optionp2 != 'N' && optionp2 != 'n')
                                        {

                                          cout << "Wrong Input";
                                          cout << "\nPlease enter again. Yes (Y) / No (N) : ";
                                          cin >> optionp2;

                                                 if (optionp2 == 'Y'  || optionp2 == 'y')
                                                     goto banner2;

                                                 else if (optionp2 == 'N' || optionp2 == 'n')
                                                     goto banner;

                                        }

                          }

                  else if (choicesize == '3')

                          {
                           cout << "\n\n|||||||||||||||||||||||||||||||||||||||||||||| " << size3 << " ||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n";


		                   cout <<"\t\t\t 1. >>>  "<< l_size1 << "\n\n" ;
                           cout <<"\t\t\t 2. >>>  "<< l_size2 << "\n\n" ;
		                   cout <<"\t\t\t 3. >>>  "<< l_size3 << "\n\n" ;
		                   cout <<"\t\t\t 4. >>>  "<< l_size4 << "\n\n" ;
		                   cout <<"\t\t\t 5. >>>  "<< l_size5 << "\n\n" ;
                           cout <<"\t\t\t 6. >>>  "<< l_size6 << "\n\n" ;
		                   cout <<"\t\t\t 7. >>>  "<< l_size7 << "\n\n" ;

		                   cout << "-----------------------------------------------------------------------------------------------------------------------";
		                   cout << "\n What size would you like to have? [ 1 | 2 | 3 | 4 | 5 | 6 | 7 ]: ";
		                   cin >> pchoice;
		                          while (pchoice != '1' && pchoice != '2' && pchoice != '3' && pchoice != '4' && pchoice != '5' && pchoice != '6' && pchoice != '7')
                                         {

                                          cout << "Wrong input . Please enter again [ 1 | 2 | 3 | 4 | 5 | 6 | 7 ]: " ;
                                          cin >> pchoice;

                                         }
                                  if (pchoice == 1 )
                                      size_price = 24.00;

                                  else if (pchoice == 2 )
                                      size_price = 25.00;

                                  else if (pchoice == 3 )
                                      size_price = 25.00;

                                  else if (pchoice == 4 )
                                      size_price = 26.00;

                                  else if (pchoice == 5 )
                                      size_price = 26.00;

                                  else if (pchoice == 6 )
                                      size_price = 27.00;

                                  else if (pchoice == 7 )
                                      size_price = 27.00;


                           cout << ("\n\n ");
                           cout << ("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n");
                           cout << " Would you like to proceed? \n Yes (Y) / No (N) : ";
                           cin >> optionp2;
                                  if (optionp2 == 'Y'  || optionp2 == 'y')
                                      goto banner2;

                                  else if (optionp2 == 'N' || optionp2 == 'n')
                                      goto banner;

                                  while (optionp2 != 'Y' && optionp2 != 'y' && optionp2 != 'N' && optionp2 != 'n')
                                        {

                                          cout << "Wrong Input";
                                          cout << "\nPlease enter again. Yes (Y) / No (N) : ";
                                          cin >> optionp2;

                                                 if (optionp2 == 'Y'  || optionp2 == 'y')
                                                     goto banner2;

                                                 else if (optionp2 == 'N' || optionp2 == 'n')
                                                     goto banner;

                                        }

                          }

                  else if (choicesize == '4')
                           {
                             cout << "\n\n|||||||||||||||||||||||||||||||||||||||||||||| " << size4 << " ||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n";


		                     cout <<"\t\t 1. >>>  "<< std_size1 << "\t" , cout <<"\t\t\t 6. >>>  "<< std_size6 <<"\n\n" ;
                             cout <<"\t\t 2. >>>  "<< std_size2 << "\t" , cout <<"\t\t\t 7. >>>  "<< std_size7 <<"\n\n" ;
		                     cout <<"\t\t 3. >>>  "<< std_size3 << "\t" , cout <<"\t\t\t 8. >>>  "<< std_size8 <<"\n\n" ;
		                     cout <<"\t\t 4. >>>  "<< std_size4 << "\t" , cout <<"\t\t\t 9. >>>  "<< std_size9 <<"\n\n" ;
		                     cout <<"\t\t 5. >>>  "<< std_size5 << "\t" , cout <<"\t\t\t 10. >>> "<< std_size10 <<"\n\n\n" ;


		                     cout << "-----------------------------------------------------------------------------------------------------------------------";
                             cout << "\n What size would you like to have? [ 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 ]: ";
		                     cin >> pchoice;
		                            while (pchoice != '1' && pchoice != '2' && pchoice != '3' && pchoice != '4' && pchoice != '5' && pchoice != '6' && pchoice != '7')
                                          {

                                            cout << "Wrong input . Please enter again [ 1 | 2 | 3 | 4 | 5 | 6 | 7 ]: " ;
                                            cin >> pchoice;

                                          }
                                    if (pchoice == '1' || pchoice == '2' )
                                        size_price = 28.00;

                                    else if (pchoice == '3' || pchoice == '4' )
                                        size_price = 29.00;

                                    else if (pchoice == '5' || pchoice == '6' )
                                        size_price = 30.00;

                                    else if (pchoice == '7' || pchoice == '8' )
                                        size_price = 31.00;

                                    else if (pchoice == '9' || pchoice == '10' )
                                        size_price = 32.00;


                             cout << ("\n\n ");
                             cout << ("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n");
                             cout << " Would you like to proceed? \n Yes (Y) / No (N) : ";
                             cin >> optionp2;
                                    if (optionp2 == 'Y'  || optionp2 == 'y')
                                        goto banner2;

                                    else if (optionp2 == 'N' || optionp2 == 'n')
                                             goto banner;

                                    while (optionp2 != 'Y' && optionp2 != 'y' && optionp2 != 'N' && optionp2 != 'n')
                                          {

                                             cout << "Wrong Input";
                                             cout << "\nPlease enter again. Yes (Y) / No (N) : ";
                                             cin >> optionp2;

                                                     if (optionp2 == 'Y'  || optionp2 == 'y')
                                                         goto banner2;

                                                     else if (optionp2 == 'N' || optionp2 == 'n')
                                                              goto banner;

                                          }
                          }

                  else if (choicesize == '5')
                          {
                            cout << "\n\n|||||||||||||||||||||||||||||||||||||||||||||| " << size5 << " ||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n";


                            cout <<"\t\t\t 1. >>>  "<< xl_size1 << "\t" , cout <<"\t\t\t\t\t 9. >>>  "<< xl_size9 <<"\n\n" ;
                            cout <<"\t\t\t 2. >>>  "<< xl_size2 << "\t" , cout <<"\t\t\t\t\t10. >>>  "<< xl_size10 <<"\n\n" ;
		                    cout <<"\t\t\t 3. >>>  "<< xl_size3 << "\t" , cout <<"\t\t\t\t\t11. >>>  "<< xl_size11 <<"\n\n" ;
		                    cout <<"\t\t\t 4. >>>  "<< xl_size4 << "\t" , cout <<"\t\t\t\t\t12. >>>  "<< xl_size12 <<"\n\n" ;
		                    cout <<"\t\t\t 5. >>>  "<< xl_size5 << "\t" , cout <<"\t\t\t\t\t13. >>>  "<< xl_size13 <<"\n\n" ;
		                    cout <<"\t\t\t 6. >>>  "<< xl_size6 << "\t" , cout <<"\t\t\t\t\t14. >>>  "<< xl_size14 <<"\n\n" ;
		                    cout <<"\t\t\t 7. >>>  "<< xl_size7 << "\t" , cout <<"\t\t\t\t\t15. >>>  "<< xl_size15 <<"\n\n\n" ;
		                    cout <<"\t\t\t 8. >>>  "<< xl_size8 << "\t" ,

		                    cout << "-----------------------------------------------------------------------------------------------------------------------";
		                    cout << "\n What size would you like to have? [ 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 ]: ";
		                    cin >> pchoice;
		                           while (pchoice != '1' && pchoice != '2' && pchoice != '3' && pchoice != '4' && pchoice != '5' && pchoice != '6' && pchoice != '7')
                                         {
                                           cout << "Wrong input . Please enter again [ 1 | 2 | 3 | 4 | 5 | 6 | 7 ]: " ;
                                           cin >> pchoice;

                                         }
                                    if (pchoice == '1' || pchoice == '2' )
                                        size_price = 33.00;

                                    else if (pchoice == '3' || pchoice == '4' )
                                        size_price = 34.00;

                                    else if (pchoice == '5' || pchoice == '6' )
                                        size_price = 35.00;

                                    else if (pchoice == '7' || pchoice == '8' )
                                        size_price = 36.00;

                                    else if (pchoice == '9' || pchoice == '10' )
                                        size_price = 37.00;

                                    else if (pchoice == '11' || pchoice == '12' )
                                        size_price = 38.00;

                                    else if (pchoice == '13' || pchoice == '14' )
                                        size_price = 39.00;

                                    else if (pchoice == '15' )
                                        size_price = 40.00;


		                    cout << ("\n\n ");
                            cout << ("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n");
                            cout << " Would you like to proceed? \n Yes (Y) / No (N) : ";
                            cin >> optionp2;
                                   if (optionp2 == 'Y'  || optionp2 == 'y')
                                       goto banner2;

                                   else if (optionp2 == 'N' || optionp2 == 'n')
                                       goto banner;

                                   while (optionp2 != 'Y' && optionp2 != 'y' && optionp2 != 'N' && optionp2 != 'n')
                                          {

                                            cout << "Wrong Input";
                                            cout << "\nPlease enter again. Yes (Y) / No (N) : ";
                                            cin >> optionp2;

                                                    if (optionp2 == 'Y'  || optionp2 == 'y')
                                                        goto banner2;

                                                    else if (optionp2 == 'N' || optionp2 == 'n')
                                                             goto banner;

                                          }
                          }

	              else if (choicesize == '6')
                          {
                            cout << "\n\n|||||||||||||||||||||||||||||||||||||||||||||| " << size6 << " ||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n";


		                    cout << "\n What size would you like to have? \n (Example: 120 x 360 inch) \n  ";
		                    cout << " Height : ";
		                    cin >> pchoice6_H;
		                           price_L = pchoice6_H * 0.20;
		                    cout << " Length : ";
		                    cin >> pchoice6_L;
                                   price_H = pchoice6_L * 0.20;
		                           size_price = price_H + price_L;
		                    cout << ("\n\n ");
                            cout << ("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n");
                            cout << " Would you like to proceed? \n Yes (Y) / No (N) : ";
                            cin >> optionp2;
                                   if (optionp2 == 'Y'  || optionp2 == 'y')
                                       goto banner2;

                                   else if (optionp2 == 'N' || optionp2 == 'n')
                                            goto banner;

                                   while (optionp2 != 'Y' && optionp2 != 'y' && optionp2 != 'N' && optionp2 != 'n')
                                          {

                                            cout << "Wrong Input";
                                            cout << "\nPlease enter again. Yes (Y) / No (N) : ";
                                            cin >> optionp2;

                                                   if (optionp2 == 'Y'  || optionp2 == 'y')
                                                       goto banner2;

                                                    else if (optionp2 == 'N' || optionp2 == 'n')
                                                        goto banner;

                                          }

                          }

    }


banner2:
    {
        system ("color 0A");
         system ("cls");

         char optionp3;
                 {
                   cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n";
                   cout << " Please choose the file format: ";
                   cout << "\n [ PDF | PNG | JPG ]: \n :  ";
                   cin >> file_format;

                   cout << "\n\n\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n";

                   cout << " Please choose the source file format: ";
                   cout << "\n [ AI | PSD ]: \n : ";
                   cin >> source_format;

                   cout << "\n\n\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n";

                   cout << "  Basic Info of the banner \n";
                   cout << " -------------------------";

                   cout << "\n\n Please fill in: - ";
                   getline (cin, project_title);

                   cout << "\n\n Theme: ";
                   getline (cin, theme);

                   cout << "\n\n Project Title: ";
                   getline (cin, project_title);

                   cout << "\n\n Venue: ";
                   getline (cin, venue);

                   cout << "\n\n Time: ";
                   getline (cin, time);

                   cout << "\n\n Other Details: ";
                   getline (cin, other_details);

                   cout << ("\n\n ");
                   cout << ("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n");
                   cout << " Would you like to proceed? Yes (Y) / No (N) : ";
                   cin >> optionp3;
                         {
                          if (optionp3 == 'Y'  || optionp3 == 'y')
                              goto printing;

                          else if (optionp3 == 'N' || optionp3 == 'n')
                              goto banner2;
                         }

                          while (optionp3 != 'Y' && optionp3 != 'y' && optionp3 != 'N' && optionp3 != 'n')
                                 {

                                   cout << "Wrong Input";
                                   cout << "\nPlease enter again. Yes (Y) / No (N) : ";
                                   cin >> optionp3;
                                          {
                                          if (optionp3 == 'Y'  || optionp3 == 'y')
                                              goto printing;

                                          else if (optionp3 == 'N' || optionp3 == 'n')
                                              goto banner2;
                                          }

                                 }


                  }
      }

printing:
      {
        system ("color 0B");
         system ("cls");

                 {
                   cout << "\n |||||||||||||||||||||||||||||||||||||||||| P R I N T I N G  S E R V I C E |||||||||||||||||||||||||||||||||||||||||||||||\n";
                   cout << "---------------------------------------------------------------------------------------------------------------------------\n\n";
                   cout << " Would you like to have printing service? Yes (Y) / No (N) : ";
                   cin >> optionp4;
                           if (optionp4 == 'Y'  || optionp4 == 'y')
                                    {

                                      cout << "\n\n\n=======================================================================================================================\n";
                                      cout << " Printing Material " << endl;
                                      cout << "----------------------------\n\n";
                                      cout << "\t\t\t\t\t\t1. >>> Vinyl\n";
                                      cout << "\n";
                                      cout << "\t\t\t\t\t\t2. >>> Mesh Vinyl\n";
                                      cout << "\n";
                                      cout << "\t\t\t\t\t\t3. >>> Adhesive Vinyl\n";
                                      cout << "\n";
                                      cout << "\t\t\t\t\t\t4. >>> Polyester Fabric\n";
                                      cout << "\n";
                                      cout << "\t\t\t\t\t\t5. >>> Canvas";
                                      cout << "\n\n\n";
                                      cout << "=======================================================================================================================\n\n\n";
                                      cout << " What material would you prefer [ 1 | 2 | 3 | 4 | 5 ]: ";
                                      cin >> printing_material;
                                                 while (printing_material != '1' && printing_material != '2' && printing_material != '3' && printing_material != '4' && printing_material != '5')
                                                                  {

                                                                    cout << "Invalid input . Please enter again [ 1 | 2 | 3 | 4 | 5 ]: " ;
                                                                    cin >> printing_material;

                                                                  }
                                                switch (printing_material)
                                                        {
                                                          case 1:
                                                                {
                                                                  material_price = 4.00;
                                                                  break;
                                                                }

                                                          case 2:
                                                                {
                                                                  material_price = 4.00;
                                                                  break;
                                                                }

                                                          case 3:
                                                                {
                                                                  material_price = 3.00;
                                                                  break;
                                                                }

                                                          case 4:
                                                                {
                                                                  material_price = 3.00;
                                                                  break;
                                                                }

                                                          case 5:
                                                                {
                                                                  material_price = 5.00;
                                                                  break;
                                                                }

                                                          default:
                                                                  cout << " ";
                                                                    //go to printing;

                                                        }
                                      cout << "OK. Input Received.";

                                      cout << "\n\n Please enter the number of copies: ";
                                      cin >> num_copies;

                                      cout << " OK. Input Received";

                                      cout << "\n\nWould you like to proceed? \n Yes (Y) / No (N) : ";
                                      cin >> optionp4;
                                             if (optionp4 == 'Y'  || optionp4 == 'y')
                                                 goto delivery;

                                             else if (optionp4 == 'N' || optionp4 == 'n')
                                                 goto printing;

                                             while (optionp4 != 'Y' && optionp4 != 'y' && optionp4 != 'N' && optionp4 != 'n')
                                                    {

                                                      cout << "Wrong Input";
                                                      cout << "\nPlease enter again. Yes (Y) / No (N) : ";
                                                      cin >> optionp4;

                                                             if (optionp4 == 'Y'  || optionp4 == 'y')
                                                                 goto delivery;

                                                             else if (optionp4 == 'N' || optionp4 == 'n')
                                                                 goto printing;

                                                     }
                                     }

                           else if (optionp4 == 'N' || optionp4 == 'n')
                                   {
                                    size_price = 0;
                                    material_price = 0;
                                    num_copies = 1;
                                    delivery_cost = 0;
                                    goto payment;
                                   }

                           while (optionp4 != 'Y' && optionp4 != 'y' && optionp4 != 'N' && optionp4 != 'n')
                                  {

                                    cout << "Wrong Input";

                                         goto printing;

                                  }

                    }


    }


delivery:
   {
        system ("color 0A");
         system ("cls");

         string district1 = "Kota Samarahan",
                district2 = "Sri Aman",
                district3 = "Sarikei",
                district4 = "Sibu",
                district5 = "Bintulu",
                district6 = "Kapit",
                district7 = "Miri",
                district8 = "Limbang";

             {
                 cout << "\n |||||||||||||||||||||||||||||||||||||||||| D E L I V E R Y  S E R V I C E |||||||||||||||||||||||||||||||||||||||||||||||\n";
                 cout << "---------------------------------------------------------------------------------------------------------------------------\n\n";



                 cout << " Would you like to have delivery service? Yes (Y) / No (N) : ";
                 cin >> optionp5_1;
                         while ((optionp5_1 != 'Y' && optionp5_1 != 'y') && ( optionp5_1 != 'N' && optionp5_1 != 'n'))

                                {
                                 cout << "Wrong input . Please enter again Yes (Y) / No (N) : " ;
                                 cin >> optionp5_1;

                                }
                        if (optionp5_1 == 'Y'  || optionp5_1 == 'y')

                            {
                              cout << "\n\n Please enter your full address: " << endl;
                              cout << " ------------------------------------------";

                              cout << "\n\n First line of your address \n ( No. 22, Lorong Kasturi 6 ) \n :" ;
                              cin >> first_line_address;
                              getline(cin, first_line_address);


                              cout << "\n\n Second line of your address \n ( Taman Samariang Makmur, Bandar Baru Samariang, 93050 ) \n : " ;
                              getline(cin, second_line_address);



                              cout << "\n\n OK. Input Received";
                              cout << "\n ==========================================================================================================================\n\n";


                              cout << "\n\n Is your place within Kuching city? \n Yes (Y) / No (N): ";
                              cin >> optionp5;

                                      {
                                        if (optionp5 == 'Y'  || optionp5 == 'y')
                                                 {
                                                     cout << "\n\n How many kilometers is your place from our shop in Tabuan Jaya? \n :";
                                                     cin >> km;

                                                            {
                                                             while (km <= 0 )

                                                                      {
                                                                       cout << "Wrong input . Please enter again  : " ;
                                                                       cin >> km;

                                                                      }

                                                             if (km >= 1)
                                                                 delivery_cost = km * cost_per_km;
                                                            }
                                                 }

                                        else if (optionp5 == 'N' || optionp5 == 'n')
                                                 {
                                                     cout << "\n\n District :";
                                                     cout << "\n\n\n";
                                                     cout <<"\t\t\t\t\t 1. >>>  "<< district1 << "\n\n" ;
                                                     cout <<"\t\t\t\t\t 2. >>>  "<< district2 << "\n\n" ;
		                                             cout <<"\t\t\t\t\t 3. >>>  "<< district3 << "\n\n" ;
		                                             cout <<"\t\t\t\t\t 4. >>>  "<< district4 << "\n\n" ;
		                                             cout <<"\t\t\t\t\t 5. >>>  "<< district5 << "\n\n" ;
                                                     cout <<"\t\t\t\t\t 6. >>>  "<< district6 << "\n\n" ;
		                                             cout <<"\t\t\t\t\t 7. >>>  "<< district7 << "\n\n" ;
		                                             cout <<"\t\t\t\t\t 8. >>>  "<< district8 << "\n\n" ;


		                                             cout << "-----------------------------------------------------------------------------------------------------------------------";
		                                             cout << "\n What district do you live in? [ 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 ]: ";
		                                             cin >> district;
		                                                    while (district != '1' && district != '2' && district != '3' && district != '4' && district != '5' && district != '6' && district != '7' && district != '8')
                                                                  {

                                                                    cout << "Invalid input . Please enter again [ 1 | 2 | 3 | 4 | 5 | 6 | 7 ]: " ;
                                                                    cin >> district;

                                                                  }
                                                            switch (district)
                                                                  {
                                                                    {
                                                                      case 1:
                                                                            {
                                                                              if (choicesize == 1 || choicesize == 2 || choicesize == 3)
                                                                                  delivery_cost = 6.00;

                                                                              else
                                                                                  delivery_cost = 9.00;
                                                                            }
                                                                      break;
                                                                    }
                                                                    {
                                                                      case 2:
                                                                            {
                                                                              if (choicesize == 1 || choicesize == 2 || choicesize == 3)
                                                                                  delivery_cost = 6.00;

                                                                              else
                                                                                  delivery_cost = 9.00;
                                                                            }
                                                                      break;
                                                                    }
                                                                    {
                                                                      case 3:
                                                                            {
                                                                              if (choicesize == 1 || choicesize == 2 || choicesize == 3)
                                                                                  delivery_cost = 6.50;

                                                                              else
                                                                                  delivery_cost = 9.00;
                                                                            }
                                                                      break;
                                                                    }
                                                                    {
                                                                      case 4:
                                                                            {
                                                                              if (choicesize == 1 || choicesize == 2 || choicesize == 3)
                                                                                  delivery_cost = 7.00;

                                                                              else
                                                                                  delivery_cost = 9.50;
                                                                            }
                                                                      break;
                                                                    }
                                                                    {
                                                                      case 5:
                                                                            {
                                                                              if (choicesize == 1 || choicesize == 2 || choicesize == 3)
                                                                                  delivery_cost = 7.00;

                                                                              else
                                                                                  delivery_cost = 9.50;
                                                                            }
                                                                      break;
                                                                    }
                                                                    {
                                                                      case 6:
                                                                            {
                                                                              if (choicesize == 1 || choicesize == 2 || choicesize == 3)
                                                                                  delivery_cost = 7.00;

                                                                              else
                                                                                  delivery_cost = 9.50;
                                                                            }
                                                                      break;
                                                                    }
                                                                    {
                                                                      case 7:
                                                                            {
                                                                              if (choicesize == 1 || choicesize == 2 || choicesize == 3)
                                                                                  delivery_cost = 7.00;

                                                                              else
                                                                                  delivery_cost = 9.50;
                                                                            }
                                                                      break;
                                                                    }
                                                                    {
                                                                      case 8:
                                                                            {
                                                                              if (choicesize == 1 || choicesize == 2 || choicesize == 3)
                                                                                  delivery_cost = 7.00;

                                                                              else
                                                                                  delivery_cost = 9.50;
                                                                            }
                                                                      break;
                                                                    }
                                                                  }


                                                 }
                                        while (optionp5 != 'Y' && optionp5 != 'y' && optionp5 != 'N' && optionp5 != 'n')
                                                 {

                                                     cout << "\n\n Wrong Input";
                                                     cout << "\nPlease enter again. Yes (Y) / No (N) : ";
                                                     cin >> optionp5;

                                                            if (optionp5 == 'Y'  || optionp5 == 'y')
                                                                {
                                                                  cout << "\n\n How many kilometers is your place from our shop in Tabuan Jaya? \n:";
                                                                  cin >> kilometers;
                                                                  cout << " km ";
                                                                }

                                                           else if (optionp5 == 'N' || optionp5 == 'n')
                                                                {
                                                                  cout << "\n\n In which state do you live? \n :";
                                                                  cin >> district;
                                                                }
                                      }

                               cout << "\n\n OK Input Received.";
                               cout << "\n\nWould you like to proceed? \n Yes (Y) / No (N) : ";
                               cin >> optionp5;
                                         if (optionp5 == 'Y'  || optionp5 == 'y')
                                             goto payment;

                                         else if (optionp5 == 'N' || optionp5 == 'n')
                                              goto delivery;

                                         while (optionp5 != 'Y' && optionp5 != 'y' && optionp5 != 'N' && optionp5 != 'n')
                                                 {

                                                      cout << "Wrong Input";
                                                      cout << "\nPlease enter again. Yes (Y) / No (N) : ";
                                                      cin >> optionp5;

                                                             if (optionp5 == 'Y'  || optionp5 == 'y')
                                                             goto payment;

                                                             else if (optionp5 == 'N' || optionp5 == 'n')
                                                             goto delivery;
                                                 }
                                      }


                            }


                  else if (optionp5_1 == 'N' || optionp5_1 == 'n')
                       delivery_cost = 0.00;
                       km = 0.00;
                       goto payment;


             }
 }


payment:
    {
        system ("color 0E");
         system ("cls");


                   {
                       cout << "\n ||||||||||||||||||||||||||||||||||||||||||||||||||| P A Y M E N T |||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
                       cout << "==========================================================================================================================\n\n\n";

                       cout << "Customer's name        : " << name << endl;
                       cout << "Customer's email       : " << email << endl;
                       cout << "Customer's phone number: " << phone_num << endl;




                       cout << " \n\n\n Order Summary: \n";
                       cout << " ----------------\n\n";
                       cout << " Package chosen : " ;
                                if (package == '1')
                                    cout << "Basic Package \n";
                                else if (package == '2')
                                    cout << "Standard Package \n";
                                else if (package == '3')
                                    cout << "Premium Package \n";


                       cout << "\n\n\n==========================================================================================================================\n\n\n";



                       cout << " File Format        : " << file_format << endl;
                       cout << " Source File Format : " << source_format << endl;
                       cout << " Project Title      : " << project_title << endl;
                       cout << " Theme              : " << theme << endl;
                       cout << " Venue              : " << venue << endl;
                       cout << " Time               : " << time << endl;
                       cout << " Other Details      : " << other_details << endl;



                       cout << "\n\n\n==========================================================================================================================\n\n\n";



                       cout << " Printing Service (Yes or No) : ";
                               if (optionp4 == 'Y' || optionp4 == 'y')
                                   {
                                   cout << "Yes \n";
                                   cout << " Printing Material : " ;
                                            if (printing_material == '1')
                                                cout << "Vinyl";

                                            else if (printing_material == '2')
                                                cout << "Mesh Vinyl";

                                            else if (printing_material == '3')
                                                cout << "Adhesive Vinyl";

                                            else if (printing_material == '4')
                                                cout << "Polyester Fabric";

                                            else if   (printing_material == '5')
                                                cout << "Canvas";



                                   cout << " \n Number of copies : " << num_copies << endl;
                                   }
                               else
                                   {
                                   cout << "No";
                                   cout << "\n Printing Material : -";
                                   cout << "\n Size : -";
                                   cout << "\n Number of copies : - ";
                                   }
                       cout << "\n\n\n==========================================================================================================================\n\n\n";



                       cout << " Delivery Service (Yes or No) : ";
                               if (optionp4 == 'Y' || optionp4 == 'y')
                                  if (optionp5 == 'Y' || optionp5 == 'y')
                                  {
                                   cout << "Yes \n";
                                   cout << " Delivery Address : \n " << first_line_address << ", \n " << second_line_address << endl;
                                  }

                                  else
                                   cout << "No ";

                              else
                                   cout << "No ";





                       cout << "\n\n\n==========================================================================================================================\n\n\n";

                        {
                           if (package == '1')
                               price_package = 30;
                           else if (package == '2')
                               price_package = 40;
                           else if (package == '3')
                               price_package = 60;
                         }

                        total_price = (price_package + (size_price + material_price) * num_copies) + delivery_cost ;

                       cout << " Total Price : RM " << total_price;
                       cout << "\n\n Our team will reach out to you soon. Please be alert. \n\n";
                       cout << "Thank you for using MDOS!";


    }

    }

}





