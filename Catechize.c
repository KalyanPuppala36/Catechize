/*      This is a C program for Quiz.
 *      Author: VENKATA NAGA KALYAN PUPPALA (GROUP 3)
 *      DATE: 26/01/2021                               */

#include<stdio.h>
#include<string.h>
int main()
{
        int n,o,sum=0,sum1;
        char yesrn='y',name[20],agr,agr1,agr2,agr3,agr4,agr5,ans1[100],ans2[100],ans3[100],ans4[100],ans5[100],ans6[100],ans7[10],ans8[10],ans9[10],ans10[10],ans11[10],ans12[10],ans13[10],ans14[10],ans15[10],a[]="a",A[]="A",b[]="b",B[]="B",c[]="c",C[]="C",d[]="d",D[]="D";
        printf("Enter your Name:\n");
        scanf(" %[a-z A-Z 0-9 @#!&*()^%$]",name);
        while(yesrn=='y' || yesrn=='Y')
        {
        printf("The Quiz has the following topics:\n1. Current Affairs.\n2. Sports.\n3. Movies.\n4. All \nEnter the your choice among 1-4\n");
        scanf("%d",&n);
        printf("You should enter your choice among options in the Space which is given below every question\n");
        if(n==1)
        {
                printf("Enter the Difficulty level among 1-3\n1. Easy\n2. Medium\n3. Hard\n");
                scanf("%d",&o);
                if(o==1)
                {
                        printf("\t\t\tROUND ONE\nEach Question carries '5' Marks and '-1' for every wrong answer.\nThis round contains 5 questions\nEnter 'y' to continue and 'n' to quit\n\n");
                        scanf(" %c",&agr);
                        if(agr=='y' || agr=='Y')
                        {
                                printf("1. Who is the present President of India?\n A. Ram Nath Kovind\n B. Dr.A.P.J Abdul Kalam\n C. Pratibha Patil\n D. Pranab Mukherjee\n");
                                scanf(" %[a-d A-D]",ans1);
                                printf("\n");
                                if(strcmp(ans1,a)==0 || strcmp(ans1,A)==0)
                                        printf("*Answered Correctly*\n\n");
                                else
                                        printf("OOPS! you have missed the answer\nThe answer is Option A\n\n");
                                         printf("2. Who is the Finance Minister of India?\n A. Amit Shah\n B. Piyush Goyal\n C. Nitin Gadkari\n D. Nirmala Sitharaman\n");
                                scanf(" %[a-d A-D]",ans2);
                                printf("\n");
                                if(strcmp(ans2,d)==0 || strcmp(ans2,D)==0)
                                        printf("*Answered Correctly*\n\n");
                                else
                                        printf("OOPS! you have missed the answer\nThe answer is Option D\n\n");
                                printf("3. Who is the Defence Minister of India?\n A. Smriti Irani\n B. Nirmala Sitharaman\n C. Rajnath singh\n D. Arun Jaitley\n");
                                scanf(" %[a-d A-D]",ans3);
                                printf("\n");
                                if(strcmp(ans3,c)==0 || strcmp(ans3,C)==0)
                                        printf("*Answered Correctly*\n\n");
                                else
                                        printf("OOPS! you have missed the answer\nThe answer is Option C\n\n");
                                printf("4. Who is the Prime Minister of India?\n A. Amit Shah\n B. Narendra Modi\n C. Manmohan Singh\n D. Rajiv Gandhi\n");
                                scanf(" %[a-d A-D]",ans4);
                                printf("\n");
                                if(strcmp(ans4,b)==0 || strcmp(ans4,B)==0)
                                        printf("*Answered Correctly*\n\n");
                                else
                                        printf("OOPS! you have missed the answer\nThe answer is Option B\n\n");
                                printf("5. Who is the Railway Minister of India?\n A. Nitin Gadkari\n B. Piyush Goyal\n C. Smriti Irani\n D. Ramesh Pokhriyal\n");
                                scanf(" %[a-d A-D]",ans5);
                                printf("\n");
                                if(strcmp(ans5,b)==0 || strcmp(ans5,B)==0)
                                        printf("*Answered Correctly*\n\n");
                                else
                                        printf("OOPS! you have missed the answer\nThe answer is Option B\n\n");
                                        if(strcmp(ans1,a)==0 && strlen(ans1)==1)
                                {
                                        sum=sum+5;
                                }
                                else if(strcmp(ans1,A)==0 && strlen(ans1)==1)
                                {
                                        sum=sum+5;
                                }
                                else
                                {
                                        sum=sum-1;
                                }
                                if(strcmp(ans2,d)==0 && strlen(ans2)==1)
                                {
                                        sum=sum+5;
                                }
                                else if(strcmp(ans2,D)==0 && strlen(ans2)==1)
                                {
                                        sum=sum+5;
                                }
                                else
                                {
                                        sum=sum-1;
                                }
                                if(strcmp(ans3,c)==0 && strlen(ans3)==1)
                                {
                                        sum=sum+5;
                                }
                                else if(strcmp(ans3,C)==0 && strlen(ans3)==1)
                                {
                                        sum=sum+5;
                                }
                                else
                                {
                                        sum=sum-1;
                                }
                                if(strcmp(ans4,b)==0 && strlen(ans4)==1)
                                {
                                        sum=sum+5;
                                }
                                else if(strcmp(ans4,B)==0 && strlen(ans4)==1)
                                {
                                        sum=sum+5;
                                }
                                else
                                {
                                        sum=sum-1;
                                }
                                if(strcmp(ans5,b)==0 && strlen(ans5)==1)
                                {
                                        sum=sum+5;
                                }
                                else if(strcmp(ans5,B)==0 && strlen(ans5)==1)
                                {
                                        sum=sum+5;
                                }
                                else
                                {
                                        sum=sum-1;
                                }
                        }
                        else if(agr=='n' || agr=='N')
                        {
                            printf("You Cannot Continue to the Next Round If you Quit Here\nEnter 'y' to Quit and 'n' to skip round 1\n");
                                scanf(" %c",&agr5);
                                if(agr5=='y' || agr5=='Y')
                                {
                                        printf("Thanks for Visiting\n");
                                        return 0;
                                }
                                else if(agr5=='n' || agr5=='N')
                                        printf("Thanks for Continuing\n");
                                else
                                {
                                        printf("\t\t\tERROR 404\n\tWrong key entered\n");
                                        return 0;
                                }
                        }
                        printf("Enter 'y' to continue to Round 2 and 'n' to Quit\n");
                        scanf(" %c",&agr1);
                        if(agr1=='y' || agr1=='Y')
                        {
                                printf("\t\t\tROUND TWO\nEach Question Carries '5' Marks and '-1' for every wrong answer\n\n");
                                printf("6. Who is the Minister of Home Affairs?\n A. Narendra Modi\n B. Amit Shah\n C. Prakash Javdekar\n D. Harsh Vardhan\n");
                                scanf(" %[a-d A-D]",ans6);
                                printf("\n");
                                if(strcmp(ans6,b)==0 || strcmp(ans6,B)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                    sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option B\n\n");
                                }
                                printf("7. Who is the Minister of External Affairs?\n A. Subrahmanyam Jaishankar\n B. Arjun Munda\n C. Ramesh Pokhriyal\n D. Arun Jaitley\n");
                                scanf(" %[a-d A-D]",ans7);
                                printf("\n");
                                if(strcmp(ans7,a)==0 || strcmp(ans7,A)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe Answer is Option A\n\n");
                                }
                                printf("8. Who is the President of BCCI?\n A. Sachin\n B. Sehwag\n C. Saurav Gunguly\n D. MS Dhoni\n");                                scanf(" %[a-d A-D]",ans8);
                                printf("\n");
                                if(strcmp(ans8,c)==0 || strcmp(ans8,C)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option C\n\n");
                                }
                                printf("9. Who is the Minister of Women and Child Development?\n A. Smriti Irani\n B. Nirmala Sitharaman\n C. Pralhad Joshi\n D. Narendra Singh Tomar\n");
                                scanf(" %[a-d A-D]",ans9);
                                printf("\n");
                                if(strcmp(ans9,a)==0 || strcmp(ans9,A)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the Answer\nThe answer is Option A\n\n");
                                }
                                printf("10. Who is the President of International Olympics Committee?\n A. Adhip Das\n B. Jacques Rogge\n C. John Coates\n D. Thomas Bach\n");
                                scanf(" %[a-d A-D]",ans10);
                                printf("\n");
                                if(strcmp(ans10,d)==0 || strcmp(ans10,D)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option D\n\n");
                                }
                        }
                        else
                        {
                                printf("You cannot Continue to the next round If you Quit here\nEnter 'y' to Quit and 'n' to skip this round\n");
                                scanf(" %c",&agr2);
                                if(agr2=='y' || agr2=='Y')
                                {
                                        if(sum>0)
                                        {
                                                printf("Your score is %d\n",sum);
                                        }
                                        if(sum<0)
                                        {
                                                sum=sum+20;
                                                sum1=20-sum;
                                                printf("Your score is -%d\n",sum1);
                                        }
                                        printf("Thanks for Visiting\n");
                                        return 0;
                                }
                                else if(agr2=='n' || agr2=='N')
                                        printf("Thanks for Continuing\n");
                                else
                                {
                                        printf("\t\tERROR 404\nWrong key entered\n");
                                        return 0;
                                }
                        }
                        printf("Do you want to continue to Third round\n If yes Enter 'y' If you want to Quit Enter 'n'\n");
                        scanf(" %c",&agr3);
                        if(agr3=='y' || agr3=='Y')
                        {
                                printf("\t\t\tROUND THREE\nEach Question carries '5' Marks and '-1' for Every Wrong Answer\n\n");
                                printf("11. Who is the Minister of Tribal affairs?\n A. Arjun Munda\n B. Dharmendra Pradhan\n C. Giriraj Singh\n D. D.V.S.Gowda\n");
                                scanf(" %[a-d A-D]",ans11);
                                printf("\n");
                                if(strcmp(ans11,a)==0 || strcmp(ans11,A)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option A\n\n");
                                }
                                printf("12. Who won the Recent Presidential Elections held in America?\n A. Donald Trump\n B. Joe Biden\n C. Barack Obama\n D. Hillary Clinton\n");
                                scanf(" %[a-d A-D]",ans12);
                                printf("\n");
                                if(strcmp(ans12,b)==0 || strcmp(ans12,B)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option B\n\n");
                                }
                                printf("13. Who is the Chief Minister of Andhra Pradesh?\n A. N.Chandrababu Naidu\n B. K.Pawan Kalyan\n C. Y.S.Jagan Mohan Reddy\n D. K.A.Pual\n");
                                scanf(" %[a-d A-D]",ans13);
                                printf("\n");
                                if(strcmp(ans13,c)==0 || strcmp(ans13,C)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the Answer\nThe answer is Option C\n\n");
                                }
                                printf("14. Which is the Highest Grossing Movie of India?\n A. Bahubali 2:The Conclusion\n B. Kabaali\n C. Bajrangi Bhaijan\n D. Dangal\n");
                                scanf(" %[a-d A-D]",ans14);
                                printf("\n");
                                if(strcmp(ans14,d)==0 || strcmp(ans14,D)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option D\n\n");
                                }
                                printf("15. Who is the Chief Minister of Karnataka?\n A. B.S.Yediyurappa\n B. H.D. Kumarswamy\n C. Siddaramaiah\n D. D.K.Shivakumar\n");
                                scanf(" %[a-d A-D]",ans15);
                                printf("\n");
                                if(strcmp(ans15,a)==0 || strcmp(ans15,A)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\n The answer is Option A\n\n");
                                }
                        }
                        else if(agr3=='n' || agr3=='N')
                        {
                                if(sum>0)
                                {
                                        printf("Your score is %d.\n",sum);
                                }
                                if(sum<0)
                                {
                                        sum=sum+20;
                                        sum1=20-sum;
                                        printf("Your score is -%d\n",sum1);
                                }
                                printf("Thanks for Visiting\n");
                                return 0;
                        }
                        else
                        {
                                printf("\t\tERROR 404\nWrong key Entered\n");
                                return 0;
                        }
                }
                if(o==2)
                {
                        printf("Do you Want to Continue to Round 1?\nIf yes enter 'y' and to quit enter 'n'\n");
                        scanf(" %c",&agr);
                        if(agr=='y' || agr=='Y')
                        {
                                printf("Each Question carries '5' Marks and '-1' for every wrong answer\n\n\t\t\tROUND ONE\n\n");
                                printf("1. Who is the Chairman of National Stock Exchange(NSE)?\n A. Girish Chandra Chaturvedi\n B. Girish Bhansali\n C. Guarav Garg\n D. Ashok Chawla\n");
                                scanf(" %[a-d A-D]",ans1);
                                printf("\n");
                                if(strcmp(ans1,a)==0 || strcmp(ans1,A)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option A\n\n");
                                }
                                printf("2. Who is the Minister of Micro,small and medium Enterprises?\n A. D.V.S.Gowda\n B. Rajnath Singh\n C. Nitin Gadkari\n D. Ravi Shankar Prasad\n");
                                scanf(" %[a-d A-d]",ans2);
                                printf("\n");
                                if(strcmp(ans2,c)==0 || strcmp(ans2,C)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option C\n\n");
                                }
                                printf("3. Who is the Minister of Textiles?\n A. Mahendra Nath Pandey\n B. Pralhad Joshi\n C. Giriraj Singh\n D. Smriti Irani\n");
                                scanf(" %[a-d A-D]",ans3);
                                printf("\n");
                                 if(strcmp(ans3,d)==0 || strcmp(ans3,D)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option D\n\n");
                                }
                                printf("4. Who is the Minister of Earth Sciences?\n A. Prakash Javdekar\n B. Harsh Vardhan\n C. Narendra Singh Tomar\n D. Ravi Shankar Prasad\n");
                                scanf(" %[a-d A-D]",ans4);
                                printf("\n");
                                if(strcmp(ans4,b)==0 || strcmp(ans4,B)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option B\n\n");
                                }
                                printf("5. Who is the Minister of Law and justice?\n A. Ravi Shankar Prasad\n B. Dharmendra Pradhan\n C. Narendra Singh Tomar\n D. Ramesh Pokhriyal\n");
                                scanf(" %[a-d A-D]",ans5);
                                printf("\n");
                                if(strcmp(ans5,a)==0 || strcmp(ans5,A)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option A\n\n");
                                }
                        }
                        else
                        {
                                printf("You Cannot Continue to the Next Round If you Quit here\nEnter 'y' to Quit and 'n' to skip the round 1\n");
                                scanf(" %c",&agr1);
                                if(agr1=='y' || agr1=='Y')
                                {
                                        printf("Thanks for Visiting\n");
                                        return 0;
                                }
                                else if(agr1=='n' || agr1=='N')
                                        printf("Thanks for Continuing\n");
                                else
                                {
                                        printf("\t\t\tERROR 404\n\tWrong Key Entered");
                                        return 0;
                                }
                        }
                        printf("Do You Want to Continue to Round 2?\nIf Yes enter 'y' and to Quit enter 'n'\n");
                        scanf(" %c",&agr2);
                        if(agr2=='y' || agr2=='Y')
                        {
                                printf("Each Quetion Carries '5' Marks and '-1' for wrong answer\n\n\t\t\tROUND TWO\n\n");
                                printf("6. Who is the Minister of Minority Affairs?\n A. Mukhtar Abbas Naqvi\n B. Mahendra Nath Pandey\n C. Pralhad Joshi\n D. Gajendra Singh Shekhawat\n");
                                scanf(" %[a-d A-D]",ans6);
                                printf("\n");
                                if(strcmp(ans6,a)==0 || strcmp(ans6,A)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option A\n\n");
                                }
                                printf("7. Who is the Minister of Chemicals and Fertilizers?\n A. D.V.Sadananda Gowda\n B. Arjun Munda\n C. Ravi Shankar Prasad\n D. Dharmendra Pradhan\n");
                                scanf(" %[a-d A-D]",ans7);
                                printf("\n");
                                if(strcmp(ans7,a)==0 || strcmp(ans7,A)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed answer\nThe answer is Option A\n\n");
                                }
                                printf("8. Who is the Minister of Panchayati Raj?\n A. Pralhad Joshi\n B. Piyush Goyal\n C. Narendra Singh Tomar\n D. Thawar Chand Gelhot\n");
                                scanf(" %[a-d A-D]",ans8);
                                printf("\n");
                                if(strcmp(ans8,c)==0 || strcmp(ans8,C)==0)
                                {
                                    sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option C\n\n");
                                }
                                printf("9. Who is the Minister of Food Processing Industries?\n A. Jitendra Singh\n B. Narendra Singh Tomar\n C. Kiren Rijiju\n D. Nitin Gadkari\n");
                                scanf(" %[a-d A-D]",ans9);
                                printf("\n");
                                if(strcmp(ans9,b)==0 || strcmp(ans9,B)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option B\n\n");
                                }
                                printf("10. Who is the Chairman of Rajya Sabha?\n A. Harivansh Narayan Singh\n B. Meira Kumar\n C. G.V.Mavalankar\n D. M.Venkaiah Naidu\n");
                                scanf(" %[a-d A-D]",ans10);
                                printf("\n");
                                if(strcmp(ans10,d)==0 || strcmp(ans10,D)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option D\n\n");
                                }
                        }
                        else if(agr2=='n' || agr2=='N')
                        {
                                printf("You cannot Continue to the Next round If you Quit here\nEnter 'y' to Quit and to skip the Round 2 enter 'n'\n");
                                scanf(" %c",&agr3);
                                if(agr3=='y' || agr3=='Y')
                                {
                                        if(sum>0)
                                                printf("Your Score is %d\n",sum);
                                        if(sum<0)
                                        {
                                                sum=sum+20;
                                                sum1=20-sum;
                                                printf("Your score is -%d\n",sum1);
                                        }
                                        printf("\t\t\tThanks For Visiting\n");
                                        return 0;
                                }
                                else if(agr3=='n' || agr3=='N')
                                        printf("Thanks for Continuing\n");
                                else
                                {
                                        printf("\t\t\tERROR 404\n\tWrong key entered\n");
                                        return 0;
                                }
                        }
                        else
                        {
                                printf("\t\t\tERROR 404\n\tWrong Key Entered\n");
                                return 0;
                        }
                        printf("Do you want to Continue to Round 3?\nIf Yes Enter 'y' and to quit enter 'n'\n");
                        scanf(" %c",&agr4);
                        if(agr4=='y' || agr4=='Y')
                        {
                                printf("Each Question Carries '5' Marks and '-1' for Every Wrong answer\n\n\t\t\tROUND THREE\n\n");
                                printf("11. Who is the Home Minister of Andhra Pradesh?\n A. Buggana Rajendranath\n B. Mekathoti Sucharitha\n C. Anil Kumar Yadav\n D. Alla Nani\n");
                                scanf(" %[a-d A-D]",ans11);
                                printf("\n");
                                if(strcmp(ans11,b)==0 || strcmp(ans11,B)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option B\n\n");
                                }
                                printf("12. Who is the Minister of Consumer Affairs of Andhra Pradesh?\n A. Kodali Sri Venkateswara Rao(Kodali Nani)\n B. Gummanur Jayaram\n C. A.Siva Kumar\n D. Kurasala Kannababu\n");
                                scanf(" %[a-d A-D]",ans12);
                                printf("\n");
                                if(strcmp(ans12,a)==0 || strcmp(ans12,A)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option A\n\n");
                                }
                                printf("13. Who is the Chief Minister of Gujarat?\n A. Amit Shah\n B. Narendra Modi\n C. Vijay Rupani\n D. Anandiben Patil\n");
                                scanf(" %[a-d A-D]",ans13);
                                printf("\n");
                                if(strcmp(ans13,c)==0 || strcmp(ans13,C)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option C\n\n");
                                }
                                printf("14. Who is the Speaker of Lok Sabha?\n A. Somnath Chatterjee\n B. Meira Kumar\n C. Sumitra Mahajan\n D. Om Birla\n");
                                scanf(" %[a-d A-D]",ans14);
                                printf("\n");
                                if(strcmp(ans14,d)==0 || strcmp(ans14,D)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option D\n\n");
                                }
                                printf("15. Who is the first Indian born to be a Member of Parliament in New Zealand?\n A. Kanwaljit Singh Bakshi\n B. Parmjeet Parmar\n C. Priyanca Radhakrishnan\n D. Mahesh Bindra\n");
                                scanf(" %[a-d A-D]",ans15);
                                printf("\n");
                                if(strcmp(ans15,a)==0 || strcmp(ans15,A)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option A\n\n");
                                }
                        }
                        else if(agr4=='n' || agr4=='N')
                        {
                                printf("If you want to Quit here\n Enter 'y' to Quit\n");
                                scanf(" %c",&agr5);
                                if(agr5=='y' || agr5=='Y')
                                {
                                        if(sum>0)
                                                printf("Your Score is %d\n",sum);
                                        if(sum<0)
                                        {
                                                sum=sum+20;
                                                sum1=20-sum;
                                                printf("Your Score is -%d\n",sum1);
                                        }
                                        printf("Thanks for Visiting\n");
                                        return 0;
                                }
                        }
                }
                if(o==3)
                {
                        printf("Do you want to Continue to Round 1?\nIf Yes Enter 'y' and to Quit Enter 'n'\n");
                        scanf(" %c",&agr);
                        if(agr=='y' || agr=='Y')
                        {
                                printf("Each Question Carries '5' Marks and '-1' for every Wrong answer\n\n\t\t\tROUND ONE\n\n");
                                printf("1. Name the scheme Launched by Government of India to Improve the Wifi availability in Public spaces across India\n A. PM-CONNECT\n B. PM-WIFI\n C. PM-WANI\n D. PM-5G\n");
                                scanf(" %[a-d A-D]",ans1);
                                printf("\n");
                                if(strcmp(ans1,c)==0 || strcmp(ans1,C)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option C\n\n");
                                }
                                printf("2. What is the projected GDP Growth rate of India in year 2020 as per the Asian Development Bank(ADS)?\n A. -10 percent \n B. -7 percent \n C. -9 percent \n D. -8 percent \n");
                                scanf(" %[a-d A-D]",ans2);
                                printf("\n");
                                if(strcmp(ans2,d)==0 || strcmp(ans2,D)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option D\n\n");
                                }
                                printf("3. How much Amount has been approved by the Cabinet for the Atmanirbhar Bharat Rojgar Yojana(ABRY)?\n A. Rs.22,810 crore\n B. Rs.22,510 crore\n C. Rs.22,110 crore\n D. Rs.22,310 crore\n");
                                scanf(" %[a-d A-D]",ans3);
                                printf("\n");
                                if(strcmp(ans3,a)==0 || strcmp(ans3,A)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option A\n\n");
                                }
                                printf("4. Name the celebrity who has topped the '50 Asian Celebrities in the World' 2020 list of UK based Eastern Eye Newspaper\n A. Amitabh Bachchan\n B. Priyanka Chopra\n C. Sonu Sood\n D. Rajnikanth\n");
                                scanf(" %[a-d A-D]",ans4);
                                printf("\n");
                                if(strcmp(ans4,c)==0 || strcmp(ans4,C)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option C\n\n");
                                }
                                printf("5. Which day is celebrated as International Mountain Day?\n A. 12th December\n B. 11th December\n C. 18th December\n D. 17th December\n");
                                scanf(" %[a-d A-D]",ans5);
                                printf("\n");
                                if(strcmp(ans5,b)==0 || strcmp(ans5,B)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option B\n\n");
                                }
                        }
                        else if(agr=='n' || agr=='N')
                        {
                                printf("You Cannot Continue to the Next Round If You Quit here\nEnter 'y' to Quit and 'n' to skip Round 1\n");
                                scanf(" %c",&agr1);
                                if(agr1=='y' || agr1=='Y')
                                {
                                        printf("Thanks for Visiting\n");
                                        return 0;
                                }
                                else if(agr1=='n' || agr1=='N')
                                        printf("Thanks for Continuing\n");
                                else
                                {
                                        printf("\t\t\tERROR 404\n\tWrong Key Entered\n");
                                        return 0;
                                }
                        }
                        else
                        {
                                printf("\t\t\tERROR 404\n\tWrong Key Entered\n");
                                return 0;
                        }
                        printf("Do You want to Continue to Round 2\nIf Yes Enter 'y' and to Quit Enter 'n'\n");
                        scanf(" %c",&agr2);
                        if(agr2=='y' || agr2=='Y')
                        {
                                printf("Each Question carries '5' marks and '-1' for Every wrong answer\n\n\t\t\tROUND TWO\n\n");
                                printf("6. The Koilwar Bridge has been inaugurated in which state recently?\n A. Rajasthan\n B. Uttar Pradesh\n C. Madhya Pradesh\n D. Bihar\n");
                                scanf(" %[a-d A-D]",ans6);
                                printf("\n");
                                if(strcmp(ans6,d)==0 || strcmp(ans6,D)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option D\n\n");
                                }
                                printf("7. The National Centre for Divyang Empowermnet(NCDE) has been launched by CRPF in Which state?\n A. Maharashtra\n B. Telangana\n C. Karnataka\n D. Assam\n");
                                scanf(" %[a-d A-D]",ans7);
                                printf("\n");
                                if(strcmp(ans7,b)==0 || strcmp(ans7,B)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option B\n\n");
                                }
                                printf("8. UNICEF Day is observed on which day annually across the Globe?\n A. December 9th\n B. December 10th\n C. December 11th\n D. December 12th\n");
                                scanf(" %[a-d A-D]",ans8);
                                printf("\n");
                                if(strcmp(ans8,c)==0 || strcmp(ans8,C)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option C\n\n");
                                }
                                printf("9. Ludonic Orban has recently resigned as Prime Minister of Which country?\n A. Hungary\n B. Romania\n C. Portugal\n D. Slovakia\n");
                                scanf(" %[a-d A-D]",ans9);
                                printf("\n");
                                if(strcmp(ans9,b)==0 || strcmp(ans9,B)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option B\n\n");
                                }
                                printf("10. Which activity is Newest to be Officially declared as the Olympic sports and is Slated to debute in 2024 paris Games?\n A. BreakDancing\n B. Zumba\n C. Ballet Dance\n D. Pole Dance\n");
                                scanf(" %[a-d A-D]",ans10);
                                printf("\n");
                                if(strcmp(ans10,a)==0 || strcmp(ans10,A)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option A\n\n");
                                }
                        }
                        else if(agr2=='n' || agr2=='N')
                        {
                                printf("You Cannot Continue to the Round 3 If you Quit here\nEnter 'y' to Quit and 'n' to skip the round 2\n");
                                scanf(" %c",&agr3);
                                if(agr3=='y' || agr3=='Y')
                                {
                                        if(sum>0)
                                                printf("Your Score is %d\n",sum);
                                        if(sum<0)
                                        {
                                                sum=sum+20;
                                                sum1=20-sum;
                                                printf("Your Score is -%d\n",sum1);
                                        }
                                        printf("Thanks for Visiting\n");
                                        return 0;
                                }
                                else if(agr3=='n' || agr3=='N')
                                        printf("Thanks for Continuing\n");
                                else
                                {
                                        printf("\t\t\tERROR 404\n\tWrong Key Entered\n");
                                        return 0;
                                }
                        }
                        else
                        {
                                printf("\t\t\tERROR 404\n\tWrong Key Entered\n");
                                return 0;
                        }
                        printf("Do You want to Continue to Round 3?\nIf Yes enter 'y' and to Quit enter 'n'\n");
                        scanf(" %c",&agr4);
                        if(agr4=='y' || agr4=='Y')
                        {
                                printf("Each Question Carries '5' Marks and '-1' for every wrong answer\n\n\t\t\tROUND THREE\n\n");
                                printf("11. What is the theme of International Mountain Day 2020?\n A. Mountain Farming\n B. Mountains Matter for Youth\n C. Mountains under Pressure: Climate, Hunger, Migration\n D. Mountain Biodiversity\n");
                                scanf(" %[a-d A-D]",ans11);
                                printf("\n");
                                if(strcmp(ans11,d)==0 || strcmp(ans11,D)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option D\n\n");
                                }
                                printf("12. Who among the Following has been awarded 2020 Ramanujan Prize for young Mathematicians?\n A. Hoang Hiep Pham\n B. Carolina Araujo\n C. Ritabratha Munshi\n D. Eduardo Teixeira\n");
                                scanf(" %[a-d A-D]",ans12);
                                printf("\n");
                                if(strcmp(ans12,b)==0 || strcmp(ans12,B)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option B\n\n");
                                }
                                printf("13. Name the Indian Athlete, who recently Hounered Sportsperson of the year in Female Category by FICCI\n A. Saina Nehwal\n B. P.V.Sindhu\n C. Elavenil Valarivan\n D. Aparna Popat\n");
                                scanf(" %[a-d A-D]",ans13);
                                printf("\n");
                                if(strcmp(ans13,c)==0 || strcmp(ans13,C)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option C\n\n");
                                }
                                printf("14. Name the Indian Athlete, who recently Hounered Sportsperson of the year in Male Category by FICCI\n A. Anup Sridhar\n B. Chetan Anand\n C. MS Dhoni\n D. Bajarang Punia\n");
                                scanf(" %[a-d A-D]",ans14);
                                printf("\n");
                                if(strcmp(ans14,d)==0 || strcmp(ans14,D)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option D\n\n");
                                }
                                printf("15. Which of the Following state is Hounered with 'Best State Promoting Sports' by FICCI\n A. Haryana\n B. Madhya Pradesh\n C. Maharashtra\n D. Gujarat\n");
                                scanf(" %[a-d A-D]",ans15);
                                printf("\n");
                                if(strcmp(ans15,b)==0 || strcmp(ans15,B)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option B\n\n");
                                }
                        }
                        else if(agr4=='n' || agr4=='N')
                        {
                                if(sum>0)
                                        printf("Your Score is %d\n",sum);
                                if(sum<0)
                                {
                                        sum=sum+20;
                                        sum1=20-sum;
                                        printf("Your Score is -%d\n",sum1);
                                }
                                printf("Thanks for Visiting\n");
                        }
                        else
                        {
                                printf("\t\t\tERROR 404\n\tWrong Key Entered\n");
                                return 0;
                        }
                }
                else if(o>3 && o<1)
                {
                        printf("\t\t\tERROR 404\n\tWrong Key Entered\n");
                        return 0;
                }
        }
        if(n==2)
        {
                printf("Enter the Difficulty Level among 1-3\n1. Easy\n2. Medium\n3. Hard\n");
                scanf("%d",&o);
                printf("Please enter your choice in the space left below every Question\nEach question Carries '5' Marks and'-1' for every wrong answer\n");
                if(o==1)
                {
                        printf("Do you want to Continue to Round 1?\nIf Yes Enter 'y' and to Quit enter 'n'\n");
                        scanf(" %c",&agr);
                        if(agr=='y' || agr=='Y')
                        {
                                printf("\n\t\t\tROUND ONE\n\n");
                                printf("1. Who is the Highest Run getter in the history of Cricket\n A. Kumar Sangakkara\n B. Sachin Tendulkar\n C. Ricky Ponting\n D. Sanath Jayasuriya\n");
                                scanf(" %[a-d A-D]",ans1);
                                if(strcmp(ans1,b)==0 || strcmp(ans1,B)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option B\n\n");
                                }
                                printf("2. Who is the top Goal scorer in history of Football?\n A. Cristiano Ronaldo\n B. Lionel Messi\n C. Josef Bican\n D. Pele\n");
                                scanf(" %[a-d A-D]",ans2);
                                if(strcmp(ans2,c)==0 || strcmp(ans2,C)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option C\n\n");
                                }
                                printf("3. Who has record as the most goals scored by one player in National Hockey League(NHL)?\n A. Wayne Gretzky\n B. Gordie Howe\n C. Jaromir Jagr\n D. Ovechkin\n");
                                scanf(" %[a-d A-D]",ans3);
                                if(strcmp(ans3,a)==0 || strcmp(ans3,A)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option A\n\n");
                                }
                                printf("4. What is the National Sport of Bangladesh?\n A. Cricket\n B. Hockey\n C. Badminton\n D. Kabaddi\n");
                                scanf(" %[a-d A-D]",ans4);
                                if(strcmp(ans4,d)==0 || strcmp(ans4,D)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option D\n\n");
                                }
                                printf("5. What is the National Sport of Sri Lanka?\n A. Cricket\n B. Rugby\n C. Volleyball\n D. Kabaddi\n");
                                scanf(" %[a-d A-D]",ans5);
                                if(strcmp(ans5,c)==0 || strcmp(ans5,C)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option C\n\n");
                                }

                        }
                        else if(agr=='n' || agr=='N')
                        {
                                printf("You Cannot Continue to Round 2 If you Quit here\nEnter 'y' to Quit and 'n' to skip the Round 1\n");
                                scanf(" %c",&agr1);
                                if(agr1=='y' || agr1=='Y')
                                {
                                        printf("Thanks for Visiting\n");
                                        return 0;
                                }
                                else if(agr1=='n' || agr1=='N')
                                        printf("Thanks for Continuing\n");
                                else
                                {
                                        printf("\n\t\t\tERROR 404\n\tWrong Key Entered\n");
                                        return 0;
                                }
                        }
                        else
                        {
                                printf("\n\t\t\tERROR 404\n\tWrong Key Enteres\n");
                                return 0;
                        }
                        printf("Do you want to Continue to Round 2?\nIf Yes enter 'y' and to Quit enter 'n'\n");
                        scanf(" %c",&agr2);
                        if(agr2=='y' || agr2=='Y')
                        {
                                printf("Each Question carries '5' Marks and '-1' for every wrong answer\n\n\t\t\tROUND TWO\n\n");
                                printf("6. Which team won the 2003 World Cup of cricket?\n A. Australia\n B. India\n C. Sri Lanka\n D. West Indies\n");
                                scanf(" %[a-d A-D]",ans6);
                                if(strcmp(ans6,a)==0 || strcmp(ans6,A)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option A\n\n");
                                }
                                printf("7. Which of the Following team haven't won even one World Cup in cricket?\n A. West Indies\n B. Sri Lanka\n C. Pakistan\n D. South Africa\n");
                                scanf(" %[a-d A-D]",ans7);
                                if(strcmp(ans7,d)==0 || strcmp(ans7,D)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option D\n\n");
                                }
                                printf("8. Only Player to hit 6 sixes in an over in T20I\n A. Shahid Afridi\n B. MS Dhoni\n C. Yuvaraj Singh\n D. Ravi Shastri\n");
                                scanf(" %[a-d A-D]",ans8);
                                if(strcmp(ans8,c)==0 || strcmp(ans8,C)==0)
                                 {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option C\n\n");
                                }
                                printf("9. Krishna Poonia is Associated with\n A. Hockey\n B. Chess\n C. Cricket\n D. Basket Ball\n");
                                scanf(" %[a-d A-D]",ans9);
                                if(strcmp(ans9,b)==0 || strcmp(ans9,B)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option B\n\n");
                                }
                                printf("10. Pullela Gopichand is Associated with\n A. Hockey\n B. Cricket\n C. Chess\n D. Badminton\n");
                                scanf(" %[a-d A-D]",ans10);
                                if(strcmp(ans10,d)==0 || strcmp(ans10,D)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option D\n\n");
                                }
                        }
                        else if(agr2=='n' || agr2=='N')
                        {
                                printf("You Cannot Continue to Round 3 If you Quit here\nEnter 'y' to Quit and 'n' to skip the Round\n");
                                scanf(" %c",&agr3);
                                if(agr3=='y' || agr3=='Y')
                                {
                                        if(sum>0)
                                        printf("Your Score is %d\n\nThanks for Visiting\n",sum);
                                        if(sum<0)
                                        {
                                                sum=sum+20;
                                                sum1=20-sum;
                                                printf("Your Score is -%d\n\nThanks for Visiting\n",sum1);
                                        }
                                        return 0;
                                }
                                else if(agr3=='n' || agr3=='N')
                                        printf("Thanks for Continuing\n");
                                else
                                {
                                        printf("\n\n\t\t\tERROR 404\n\tWrong Key Entered\n");
                                        return 0;
                                }
                        }
                        else
                        {
                                printf("\n\n\t\t\tERROR 404\n\tWrong Key Entered\n");
                                return 0;
                        }
                        printf("Do you want to Continue to Round 3?\nIf Yes Enter 'y' and to Quit enter 'n'\n");
                        scanf(" %c",&agr4);
                        if(agr4=='y' || agr4=='Y')
                        {
                                printf("Each Question Carries '5' Marks and '-1' for every Wrong answer\n");
                                printf("\n\n\t\t\tROUND THREE\n\n");
                                printf("11. Karnam Malleswari is Associated with\n A. Weight Lifting\n B. Football\n C. Chess\n D. Hockey\n");
                                scanf(" %[a-d A-D]",ans11);
                                if(strcmp(ans11,a)==0 || strcmp(ans11,A)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option A\n\n");
                                }
                                printf("12. Who made the fastest ODI century by an Indian player\n A. Rohit Sharma\n B. Virat Kohli\n C. Yuvraj Singh\n D. Hardik Pandya\n");
                                scanf(" %[a-d A-D]",ans12);
                                if(strcmp(ans12,b)==0 || strcmp(ans12,B)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option B\n\n");
                                }
                                printf("13. Who is called as Run Machine\n A. Rohit Sharma\n B. Ms Dhoni\n C. Virat Kohli\n D. Sachin Tendulkar\n");
                                scanf(" %[a-d A-D]",ans13);
                                if(strcmp(ans13,c)==0 || strcmp(ans13,C)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option C\n\n");
                                }
                                printf("14. Who made the highest ODI score 264\n A. Martin Guptil\n B. Brendon McCullum\n C. Sachin Tendulkar\n D. Rohit Sharma\n");
                                scanf(" %[a-d A-D]",ans14);
                                if(strcmp(ans14,d)==0 || strcmp(ans14,D)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option D\n\n");
                                }
                                printf("15. Eden Garden in Kolkata is _____ stadium\n A. Cricket\n B. Hockey\n C. Olympic\n D. Football\n");
                                scanf(" %[a-d A-D]",ans15);
                                if(strcmp(ans15,a)==0 || strcmp(ans15,A)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option A\n\n");
                                }
                        }
                        else if(agr4=='n' || agr=='N')
                        {
                                printf("You can watch your score down\n");
                        }
                        else
                        {
                                printf("\n\n\t\t\tERROR 404\n\tWrong Key Entered\n");
                                return 0;
                        }
                }
                if(o==2)
                {
                        printf("Do You want to continue to Round one(y/n)\nEnter your Choice(y/n)\n");
                        scanf(" %c",&agr);
                        if(agr=='y' || agr=='Y')
                        {
                                printf("\n\t\t\tROUND ONE\n\n");
                                printf("1. Which bowler had been in No.1 position in Test cricket for more time?\n A. Mitcheal Johnson\n B. Zaheer Khan\n C. Dale Steyn\n D. Shoab Akthar\n");
                                scanf(" %[a-d A-D]",ans1);
                                if(strcmp(ans1,c)==0 || strcmp(ans1,C)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option C\n\n");
                                }
                                printf("2. Total no of gold medals won by Indian Hockey Team\n A. 8\n B. 12\n C. 6\n D. 9\n");
                                scanf(" %[a-d A-D]",ans2);
                                if(strcmp(ans2,a)==0 || strcmp(ans2,A)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option A\n\n");
                                }
                                printf("3. Last Olympic Gold medal won by Indian Hockey Team at\n A. 1964 Japan Olympic\n B. 1980 Moscow Olympic\n C. 1972 Munich\n D. 1992 Barcelona, Spain\n");
                                scanf(" %[a-d A-D]",ans3);
                                if(strcmp(ans3,b)==0 || strcmp(ans3,B)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the Answer\nThe answer is Option B\n\n");
                                }
                                printf("4. 1st Individual Olympic medal winner from Independent India\n A. KD Jadhav\n B. Harihar Banerjee\n C. Pradeep Bode\n D. None of the Above\n");
                                scanf(" %[a-d A-D]",ans4);
                                if(strcmp(ans4,a)==0 || strcmp(ans4,A)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the Answer\nThe answer is Option A\n\n");
                                }
                                printf("5. Asia Games last Held in India \n A. 1992\n B. 1972\n C. 1986\n D. 1982\n");
                                scanf(" %[a-d A-D]",ans5);
                                if(strcmp(ans5,d)==0 || strcmp(ans5,D)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have Missed the Answer\nThe answer is Option D\n\n");
                                }
                        }
                        else if(agr=='n' || agr=='N')
                        {
                                printf("You cannot continue to round 2 if you skip here\nIf you want to quit enter 'y' and 'n' to skip round 'n'\n");
                                scanf(" %c",&agr1);
                                if(agr1=='y'|| agr1=='Y')
                                {
                                        printf("\nPlease Visit Again\n\t\t\tTHANK YOU\n");
                                        return 0;
                                }
                                else if(agr1=='n' || agr1=='N')
                                        printf("Thanks for Continuing\n");
                                else
                                {
                                        printf("\n\t\t\tERROR\n\tWrong Key Entered\n");
                                        return 0;
                                }
                        }
                        else
                        {
                                printf("\n\t\t\tERROR\n\tWrong Key Entered\n");
                                return 0;
                        }
                        printf("Do you want to continue to Round 2\nIf yes enter 'y' and to quit enter 'n'\n");
                        scanf(" %c",&agr2);
                        if(agr2=='y' || agr2=='Y')
                        {
                                printf("\n\t\t\tROUND TWO\n\n");
                                printf("6. Who among the Following is known as Flying Sikh of India\n A. Kapil Dev\n B. PT Usha\n C. Milkha Singh\n D. Joginder Singh\n");
                                scanf(" %[a-d A-D]",ans6);
                                if(strcmp(ans6,c)==0 || strcmp(ans6,C)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the Answer\nThe answer is Option C\n\n");
                                }
                                printf("7. The only driver in Indian Grand Prix 2011 is\n A. Alice Powell\n B. Sarah Fisher\n C. Maria Teresa\n D. Divina Glacia\n");
                                scanf(" %[a-d A-D]",ans7);
                                if(strcmp(ans7,a)==0 || strcmp(ans7,A)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option A\n\n");
                                }
                                printf("8. In which stadium Tendulkar completed His 100th century\n A. Eden Garden\n B. Feroz shah Kotla\n C. Chinnaswamy\n D. Shere Bangla Stadium\n");
                                scanf(" %[a-d A-D]",ans8);
                                if(strcmp(ans8,d)==0 || strcmp(ans8,D)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option D\n\n");
                                }
                                printf("9. Total Olympic Medals won by India in 2012\n A. 5\n B. 4\n C. 6\n D. 9\n");
                                scanf(" %[a-d A-D]",ans9);
                                if(strcmp(ans9,c)==0 || strcmp(ans9,C)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option C\n\n");
                                }
                                printf("10. First Non-Test Playing Team that beat India in International Cricket\n A. Sri Lanka\n B. Zimbabwe\n C. Bangladesh\n D. New Zealand\n");
                                scanf(" %[a-d A-D]",ans10);
                                if(strcmp(ans10,a)==0 || strcmp(ans10,A)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option A\n\n");
                                }
                        }
                        else if(agr2=='n' || agr2=='N')
                        {
                                printf("You cannot continue to Round 3 if you Quit here\nEnter 'y' to Quit and 'n' to skip round 2\n");                                scanf(" %c",&agr3);
                                if(agr3=='y' || agr3=='Y')
                                {
                                        if(sum>=0)
                                                printf("Your score is: %d\n",sum);
                                                else
                                        {
                                                sum=sum+20;
                                                sum1=20-sum;
                                                printf("Your score is: -%d\n",sum1);
                                        }
                                        printf("\nPlease visit Again\n\tTHANK YOU\n");
                                        return 0;
                                }
                                else if(agr3=='n' || agr3=='N')
                                        printf("Thanks for Continuing\n");
                                else
                                {
                                        printf("\n\t\t\tERROR\n\tWrong Key Entered\n");
                                        return 0;
                                }
                        }
                        else
                        {
                                printf("\n\t\t\tERROR\n\tWrong Key Entered\n");
                                return 0;
                        }
                        printf("Do you want to continue to Round 3\nIf yes enter 'y' and to quit enter 'n'\n");
                        scanf(" %c",&agr4);
                        if(agr4=='y' || agr4=='Y')
                        {
                                printf("\n\t\t\tROUND THREE\n\n");
                                printf("11. Who is the first Indian Women to win an Asian Game gold in 400m Run\n A. ML Valsamma\n B. Kamaljit Sandhu\n C. PT Usha\n D. K Malleswari\n");
                                scanf(" %[a-d A-D]",ans11);
                                    if(strcmp(ans11,b)==0 || strcmp(ans11,B)==0)
                                    {
                                            sum=sum+5;
                                            printf("\n*Answered Correctly*\n\n");
                                    }
                                    else
                                    {
                                            sum=sum-1;
                                            printf("\nOOPS! You have missed the answer\nThe answer is Option B\n\n");
                                    }
                                printf("12. Who was the Highest run scorer for India in World cup final 1983\n A. M Amarnath\n B. Kapil Dev\n C. Sunil Gavaskar\n D. K Srikkant\n");
                                scanf(" %[a-d A-D]",ans12);
                                    if(strcmp(ans12,d)==0 || strcmp(ans12,D)==0)
                                    {
                                            sum=sum+5;
                                            printf("\n*Answered Correctly*\n\n");
                                    }
                                    else
                                    {
                                            sum=sum-1;
                                            printf("\nOOPS! You have missed the answer\nThe answer is Option D\n\n");
                                    }
                                printf("13. Who was India's first Football Captain\n A. PK Banerjee\n B. Shailan Manna\n C. SC Goswami\n D. Talimeren Ao\n");
                                scanf(" %[a-d A-D]",ans13);
                                    if(strcmp(ans13,d)==0 || strcmp(ans13,D)==0)
                                    {
                                            sum=sum+5;
                                            printf("\n*Answered Correctly*\n\n");
                                    }
                                    else
                                    {
                                            sum=sum-1;
                                            printf("\nOOPS! You have missed the answer\nThe answer is Option D\n\n");
                                    }
                                printf("14. Which one is the oldest football competitions in India\n A. Santhosh Trophy\n B. Durand cup\n C. BC Roy Trophy\n D. Federation Cup\n");
                                scanf(" %[a-d A-D]",ans14);
                                if(strcmp(ans14,b)==0 || strcmp(ans14,B)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option B\n\n");
                                }
                                printf("15. Which one is the oldest Football Club in India\n A. Mohun Bagan A.C\n B. East Bengal FC\n C. Mohammedan SC\n D. Mahindra United\n");
                                scanf(" %[a-d A-D]",ans15);
                                if(strcmp(ans15,a)==0 || strcmp(ans15,A)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option A\n\n");
                                }
                        }
                        else if(agr4=='n' || agr4=='N')
                                printf("\n");
                        else
                        {
                                printf("\n\t\t\tERROR\n\tWrong Key Entered\n");
                                return 0;
                        }
                }
                if(o==3)
                {
                        printf("Do You want to continue to Round one(y/n)\nEnter your Choice(y/n)\n");
                        scanf(" %c",&agr);
                        if(agr=='y' || agr=='Y')
                        {
                                printf("\n\t\t\tROUND ONE\n\n");
                                printf("1. Who hold the National Record in 100m sprint running at 10.30sec\n A. Bahadur Prasad\n B. KM Binu\n C. Anil Kumar Prakash\n D. PT Usha\n");
                                scanf(" %[a-d A-D]",ans1);
                                if(strcmp(ans1,c)==0 || strcmp(ans1,C)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option C\n\n");
                                }
                                printf("2. Who was the first president of BCCI, when it was formed in 1928\n A. RE Grant Grovan\n B. Anthony De Mello\n C. JC Mukherjee\n D. None of the above\n");
                                scanf(" %[a-d A-D]",ans2);
                                if(strcmp(ans2,a)==0 || strcmp(ans2,A)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option A\n\n");
                                }
                                printf("3. Who hold the world record for Highest no of consecutive Maiden Overs in a Test match\n A. Bapu Nadhkarni\n B. BS Bedi\n C. Anil Kumble\n D. Shubash Gupte\n");
                                scanf(" %[a-d A-D]",ans3);
                                if(strcmp(ans3,a)==0 || strcmp(ans3,A)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option A\n\n");
                                }
                                printf("4. Who was the 1st Recepient of Rajiv Gandhi Khel Ratna Award\n A. Sunil Gavaskar\n B. Sachin Tendulkar\n C. Milkha Singh\n D. Viswanathan Anand \n");
                                scanf(" %[a-d A-D]",ans4);
                                if(strcmp(ans4,d)==0 || strcmp(ans4,D)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option D\n\n");
                                }
                                printf("5. Sachin Tendulkar his 1st Century After playing\n A. 56 Matches\n B. 18 Matches\n C. 45 Matches\n D. 78 Matches\n");
                                scanf(" %[a-d A-D]",ans5);
                                if(strcmp(ans5,d)==0 || strcmp(ans5,D)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option D\n\n");
                                }
                        }
                        else if(agr=='n' || agr=='N')
                        {
                                printf("You cannot continue to round 2 if you skip here\nIf you want to quit enter 'y' and 'n' to skip round 'n'\n");
                                scanf(" %c",&agr1);
                                if(agr1=='y'|| agr1=='Y')
                                {
                                        printf("\nPlease Visit Again\n\t\t\tTHANK YOU\n");
                                        return 0;
                                }
                                else if(agr1=='n' || agr1=='N')
                                        printf("Thanks for Continuing\n");
                                else
                                {
                                        printf("\n\t\t\tERROR\n\tWrong Key Entered\n");
                                        return 0;
                                }
                        }
                        else
                        {
                                printf("\n\t\t\tERROR\n\tWrong Key Entered\n");
                                return 0;
                        }
                        printf("Do you want to continue to Round 2\nIf yes enter 'y' and to quit enter 'n'\n");
                        scanf(" %c",&agr2);
                        if(agr2=='y' || agr2=='Y')
                        {
                                printf("\n\t\t\tROUND TWO\n\n");
                                printf("6. Which animal represent in the moscot in Delhi Asian Games, 1982\n A. A Tiger\n B. An Elephant\n C. A Lion\n D. A Panda\n");
                                scanf(" %[a-d A-D]",ans6);
                                if(strcmp(ans6,b)==0 || strcmp(ans6,B)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option B\n\n");
                                }
                                printf("7. Who won the gold medal in 2010 Commonwealth games in 55kg woman wrestling\n A. Pooja Dhanda\n B. Geetha Pogat\n C. Ambika Guha\n D. Milkha Singh\n");
                                scanf(" %[a-d A-D]",ans7);
                                if(strcmp(ans7,b)==0 || strcmp(ans7,B)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option B\n\n");
                                }
                                printf("8. First Sportsperson nominated for Rajya Sabha Membership\n A. Sachin Tendulkar\n B. Milkha Singh\n C. Sunil Gavaskar\n D. Navajot S Sindhu\n");
                                scanf(" %[a-d A-D]",ans8);
                                if(strcmp(ans8,a)==0 || strcmp(ans8,A)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                printf("\nOOPS! You have missed the answer\nThe answer is Option A\n\n");
                                }
                                printf("9. Who is the only and 1st Indian Player to compete in six Olympic Games\n A. Karni Singh\n B. Randhir Singh\n C. Leander Paes\n D. Mahesh Bhupati\n");
                                scanf(" %[a-d A-D]",ans9);
                                if(strcmp(ans9,c)==0 || strcmp(ans9,C)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option C\n\n");
                                }
                                printf("10. Who is the 1st Indian player to win a Grand Slam tournament\n A. Mahesh Bhupati\n B. Leander Paes\n C. Sania Mirza\n D. Vijay Amritraj\n");
                                scanf(" %[a-d A-D]",ans10);
                                if(strcmp(ans10,a)==0 || strcmp(ans10,A)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option A\n\n");
                                }
                        }
                        else if(agr2=='n' || agr2=='N')
                        {
                                printf("You cannot continue to Round 3 if you Quit here\nEnter 'y' to Quit and 'n' to skip round 2\n");                                scanf(" %c",&agr3);
                                if(agr3=='y' || agr3=='Y')
                                {
                                        if(sum>=0)
                                                printf("Your score is: %d\n",sum);
                                        else
                                        {
                                                sum=sum+20;
                                                sum1=20-sum;
                                                printf("Your score is: -%d\n",sum1);
                                        }
                                        printf("\nPlease visit Again\n\tTHANK YOU\n");
                                        return 0;
                                }
                                else if(agr3=='n' || agr3=='N')
                                        printf("Thanks for Continuing\n");
                                else
                                {
                                        printf("\n\t\t\tERROR\n\tWrong Key Entered\n");
                                        return 0;
                                }
                        }
                        else
                        {
                                printf("\n\t\t\tERROR\n\tWrong Key Entered\n");
                                return 0;
                        }
                        printf("Do you want to continue to Round 3\nIf yes enter 'y' and to quit enter 'n'\n");
                        scanf(" %c",&agr4);
                        if(agr4=='y' || agr4=='Y')
                        {
                                printf("\n\t\t\tROUND THREE\n\n");
                                printf("11. Who is the Youngest Grandmaster in India\n A. V Anand\n B. Parimarjan Negi\n C. P Harikrishnan\n D. Koneru Hampi\n");
                                scanf(" %[a-d A-D]",ans11);
                                if(strcmp(ans11,b)==0 || strcmp(ans11,B)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option B\n\n");
                                }
                                printf("12. Who was the Man of the Series in 1983 World Cup\n A. Kapil Dev\n B. Rogger Binny\n C. K Srikkant\n D. Mohinder Amarnath\n");
                                scanf(" %[a-d A-D]",ans12);
                                if(strcmp(ans12,d)==0 || strcmp(ans12,D)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option D\n\n");
                                }
                                printf("13. Who among the Following is known as Payyoli Express\n A. Shiny Abraham\n B. PT Usha\n C. J Sikdar\n D. KM Beenamol\n");
                                scanf(" %[a-d A-D]",ans13);
                                if(strcmp(ans13,b)==0 || strcmp(ans13,B)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option B\n\n");
                                }
                                printf("14. In Basket ball how many players are there in each side\n A. 7\n B. 9\n C. 5\n D. 6\n");
                                scanf(" %[a-d A-D]",ans14);
                                if(strcmp(ans14,c)==0 || strcmp(ans14,C)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option C\n\n");
                                }
                                printf("15. Who was the 1st Women Grandmaster in India\n A. Koneru Hampi\n B. S VijayLaxmi\n C. Esha Karvade\n D. Madhumita Bist\n");
                                scanf(" %[a-d A-D]",ans15);
                                if(strcmp(ans15,b)==0 || strcmp(ans15,B)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option B\n\n");
                                }
                        }
                        else if(agr4=='n' || agr4=='N')
                                printf("\n");
                        else
                        {
                                printf("\n\t\t\tERROR\n\tWrong Key Entered\n");
                                return 0;
                        }
                }
                else if(o>3 && o<1)
                {
                        printf("\t\t\tERROR 404\n\tWrong Key Entered\n");
                        return 0;
                }
        }
        if(n==3)
        {
                printf("Enter the Difficulty Level among 1-3\n1. Easy\n2. Medium\n3. Hard\n");
                scanf("%d",&o);
                printf("Please enter your choice in the space left below every Question\nEach question Carries '5' Marks and'-1' for every wrong answer\n");
                if(o==1)
                {
                        printf("Do you want to Continue to Round 1?\nIf Yes Enter 'y' and to Quit enter 'n'\n");
                        scanf(" %c",&agr);
                        if(agr=='y' || agr=='Y')
                        {
                                printf("\n\t\t\tROUND ONE\n\n");
                                printf("1. Which was the first Indian movie nominated for Oscar?\n A. Salaam Bombay\n B. Lagaan\n C. Mother India\n D. None of above\n");
                                scanf(" %[a-d A-D]",ans1);
                                if(strcmp(ans1,c)==0 || strcmp(ans1,C)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option C\n\n");
                                }
                                printf("2. Which was the first Indian movie to win an Oscar?\n A. Slumdog Millionaire\n B. Mother India\n C. Gandhi\n D. None of these\n");
                                scanf(" %[a-d A-D]",ans2);
                                if(strcmp(ans2,c)==0 || strcmp(ans2,C)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option C\n\n");
                                }
                                printf("3. Who got first Oscar award in India?\n A. Anil Kapoor\n B. A.R Rahman\n C. Bhanu Athaiya\n D. None of these\n");
                                scanf(" %[a-d A-D]",ans3);
                                if(strcmp(ans3,c)==0 || strcmp(ans3,C)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option C\n\n");
                                }
                                printf("4. Who is known as the Father of Indian cinema?\n A. Dhundiraj Govind Phalke\n B. Charan Singh\n C. Raja Lalith Rai\n D. Balram Naidu\n ");
                                scanf(" %[a-d A-D]",ans4);
                                if(strcmp(ans4,a)==0 || strcmp(ans4,A)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option A\n\n");
                                }
                                printf("5. Which is the highest grossing Indian film ever?\n A. Bhajarangi Bhaijan\n B. PK\n C. Dangal\n D. None of these\n");
                                scanf(" %[a-d A-D]",ans5);
                                if(strcmp(ans5,c)==0 || strcmp(ans5,C)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option C\n\n");
                                }
                        }
                        else if(agr=='n' || agr=='N')
                        {
                                printf("You cannot continue to round 2 if you skip here\nIf you want to quit enter 'y' and 'n' to skip round 'n'\n");
                                scanf(" %c",&agr1);
                                if(agr1=='y'|| agr1=='Y')
                                {
                                        printf("\nPlease Visit Again\n\t\t\tTHANK YOU\n");
                                        return 0;
                                }
                                else if(agr1=='n' || agr1=='N')
                                        printf("Thanks for Continuing\n");
                                else
                                {
                                        printf("\n\t\t\tERROR\n\tWrong Key Entered\n");
                                        return 0;
                                }
                        }
                        else
                        {
                                printf("\n\t\t\tERROR\n\tWrong Key Entered\n");
                                return 0;
                        }
                        printf("Do you want to continue to Round 2\nIf yes enter 'y' and to quit enter 'n'\n");
                        scanf(" %c",&agr2);
                        if(agr2=='y' || agr2=='Y')
                        {
                                printf("\n\t\t\tROUND TWO\n\n");
                                printf("6. Which actor has won the most national awards in India?\n A. Shah Rukh Khan\n B. Amitabh Bachchan\n C. Aamir Khan\n D. None of these\n");
                                scanf(" %[a-d A-D]",ans6);
                                if(strcmp(ans6,a)==0 || strcmp(ans6,A)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option A\n\n");
                                }
                                printf("7. Which director has directed the most movies in India?\n A. Adhitya Chopra\n B. Rohit Shetty\n C. Rajkumar Hirani\n D. None of these\n");
                                scanf(" %[a-d A-D]",ans7);
                                if(strcmp(ans7,c)==0 || strcmp(ans7,C)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option C\n\n");
                                }
                                printf("8. Which was the first Color movie in India?\n A. Kisan Kanya\n B. Alam Ara\n C. Raja Haishchandra\n D. None of these\n");
                                scanf(" %[a-d A-D]",ans8);
                                if(strcmp(ans8,a)==0 || strcmp(ans8,A)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option A\n\n");
                                }
                                printf("9. Which Hindi movie got first National Award?\n A. Shree 420\n B. Jagriti\n C. Mirza Ghalib\n D. None of these\n");
                                scanf(" %[a-d A-D]",ans9);
                                if(strcmp(ans9,c)==0 || strcmp(ans9,C)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option C\n\n");
                                }
                                printf("10. Which was the first film to win the Filmfare Best Film Award?\n A. Boot Polish\n B. Jagriti\n C. Do Bigha Zamin\n D. None of these\n");
                                scanf(" %[a-d A-D]",ans10);
                                if(strcmp(ans10,c)==0 || strcmp(ans10,C)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option C\n\n");
                                }
                        }
                        else if(agr2=='n' || agr2=='N')
                        {
                                printf("You cannot continue to Round 3 if you Quit here\nEnter 'y' to Quit and 'n' to skip round 2\n");                                scanf(" %c",&agr3);
                                if(agr3=='y' || agr3=='Y')
                                {
                                        if(sum>=0)
                                                printf("Your score is: %d\n",sum);
                                        else
                                        {
                                                sum=sum+20;
                                                sum1=20-sum;
                                                printf("Your score is: -%d\n",sum1);
                                        }
                                        printf("\nPlease visit Again\n\tTHANK YOU\n");
                                        return 0;
                                }
                                else if(agr3=='n' || agr3=='N')
                                        printf("Thanks for Continuing\n");
                                else
                                {
                                        printf("\n\t\t\tERROR\n\tWrong Key Entered\n");
                                        return 0;
                                }
                        }
                        else
                        {
                                printf("\n\t\t\tERROR\n\tWrong Key Entered\n");
                                return 0;
                        }
                        printf("Do you want to continue to Round 3\nIf yes enter 'y' and to quit enter 'n'\n");
                        scanf(" %c",&agr4);
                        if(agr4=='y' || agr4=='Y')
                        {
                                printf("\n\t\t\tROUND THREE\n\n");
                                printf("11. Which film won the award for best film at the 63rd Filmfare Award held 2018?\n A. Badrinath Ki Dulhania\n B. Hindi Medium\n C. Bareilly Ki Barfi\n D. None of these\n");
                                scanf(" %[a-d A-D]",ans11);
                                if(strcmp(ans11,b)==0 || strcmp(ans11,B)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option B\n\n");
                                }
                                printf("12. Who was the director of the famous movie ‘Sholay’?\n A. Mehboob Khan\n B. Shakti Samanta\n C. Ramesh Sippy\n D. None of these\n");
                                scanf(" %[a-d A-D]",ans12);
                                if(strcmp(ans12,c)==0 || strcmp(ans12,C)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option C\n\n");
                                }
                                printf("13. Who was the director of the famous movie ‘Mother India’?\n A. K Asif\n B. Mehboob Khan\n C. Ramesh Sippy\n D. None of these\n");
                                scanf(" %[a-d A-D]",ans13);
                                if(strcmp(ans13,b)==0 || strcmp(ans13,B)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option B\n\n");
                                }
                                printf("14. Who is the music director for the Movie Missamma (Bhoomika's)?\n A. Keeravani\n B. ManiSharma\n C. RP Patnaik\n D. Vandemataram Srinivas\n");
                                scanf(" %[a-d A-D]",ans14);
                                if(strcmp(ans14,d)==0 || strcmp(ans14,D)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option D\n\n");
                                }
                                printf("15. Who is the hero that played Venkatesh's brother role in the movie Sankranthi ?\n A. Ravi Teja\n B. Srikanth\n C. Yoganand\n D. None of these\n");
                                scanf(" %[a-d A-D]",ans15);
                                if(strcmp(ans15,b)==0 || strcmp(ans15,B)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option B\n\n");
                                }
                        }
                        else if(agr4=='n' || agr4=='N')
                                printf("\n");
                        else
                        {
                                printf("\n\t\t\tERROR\n\tWrong Key Entered\n");
                                return 0;
                        }
                }
                if(o==2)
                {
                        printf("Do You want to continue to Round one(y/n)\nEnter your Choice(y/n)\n");
                        scanf(" %c",&agr);
                        if(agr=='y' || agr=='Y')
                        {
                                printf("\n\t\t\tROUND ONE\n\n");
                                printf("1. Which was the first Cinemascope film in Bollywood?\n A. Naya Daur\n B. Sholay\n C. Kaagaz Ke Phool\n D. None of these\n");
                                scanf(" %[a-d A-D]",ans1);
                                if(strcmp(ans1,c)==0 || strcmp(ans1,C)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option C\n\n");
                                }
                                printf("2. What was the first movie of megastar Chiranjeevi?\n A. Mana oori pandavulu\n B. Big boss\n C. Donga\n D. Punaadi raalu\n");
                                scanf(" %[a-d A-D]",ans2);
                                if(strcmp(ans2,d)==0 || strcmp(ans2,D)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option D\n\n");
                                }
                                printf("3. Who was known as first lady of Indian cinema?\n A. Meena Kumari\n B. Devika Rani Chaudhuri\n C. Suraiya\n D. None of these\n");
                                scanf(" %[a-d A-D]",ans3);
                                if(strcmp(ans3,b)==0 || strcmp(ans3,B)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option B\n\n");
                                }
                                printf("4. Who is the director for the movie Jalsa?\n A. Srinu Vaitla\n B. Trivikram\n C. VV Vinayak\n D. None of these\n");
                                scanf(" %[a-d A-D]",ans4);
                                if(strcmp(ans4,b)==0 || strcmp(ans4,B)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option B\n\n");
                                }
                                printf("5. Who was the first Indian actress to receive the Padma Shri award?\n A. Bhanumathi Ramakrishna\n B. Meena Kumari\n C. Nargis Dutt\n D. None of these\n");
                                scanf(" %[a-d A-D]",ans5);
                                if(strcmp(ans5,c)==0 || strcmp(ans5,C)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option C\n\n");
                                }
                        }
                        else if(agr=='n' || agr=='N')
                        {
                                printf("You cannot continue to round 2 if you skip here\nIf you want to quit enter 'y' and 'n' to skip round 'n'\n");
                                scanf(" %c",&agr1);
                                if(agr1=='y'|| agr1=='Y')
                                {
                                        printf("\nPlease Visit Again\n\t\t\tTHANK YOU\n");
                                        return 0;
                                }
                                else if(agr1=='n' || agr1=='N')
                                        printf("Thanks for Continuing\n");
                                else
                                {
                                        printf("\n\t\t\tERROR\n\tWrong Key Entered\n");
                                        return 0;
                                }
                        }
                        else
                        {
                                printf("\n\t\t\tERROR\n\tWrong Key Entered\n");
                                return 0;
                        }
                        printf("Do you want to continue to Round 2\nIf yes enter 'y' and to quit enter 'n'\n");
                        scanf(" %c",&agr2);
                        if(agr2=='y' || agr2=='Y')
                        {
                                printf("\n\t\t\tROUND TWO\n\n");
                                printf("6. What is Brahmanandam's character name in the movie Ready?\n A. Mc Dowell Murthy\n B. Ms Donald Murthy\n C. MC Donal Murthy\n D. MC Donald Murthy\n");
                                scanf(" %[a-d A-D]",ans6);
                                if(strcmp(ans6,d)==0 || strcmp(ans6,D)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option D\n\n");
                                }
                                printf("7. which is the Upcoming Rajamouli Project?\n A. Bharat\n B. Robo 3.o\n C. Ramayan\n D. RRR\n");
                                scanf(" %[a-d A-D]",ans7);
                                if(strcmp(ans7,d)==0 || strcmp(ans7,D)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option D\n\n");
                                }
                                printf("8. Which was the first 3D movie in India?\n A. Chhota Chetan\n B. My Dear Kuttichathan\n C. Roadside Romeo\n D. None of these\n");
                                scanf(" %[a-d A-D]",ans8);
                                if(strcmp(ans8,b)==0 || strcmp(ans8,B)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option B\n\n");
                                }
                                printf("9. In which movie Tamanna was acted with hero ram?\n A. Ready\n B. Nenu Sailaja\n C. Happy Days\n D. Sahoo\n");
                                scanf(" %[a-d A-D]",ans9);
                                if(strcmp(ans9,a)==0 || strcmp(ans9,A)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option A\n\n");
                                }
                                printf("10. Tarun and Trisha movie.\n A. Nee manasu naaku telusu\n B. Stalin\n C. Nuvu leka nenu lenu\n D. Nuve nuve\n");
                                scanf(" %[a-d A-D]",ans10);
                                if(strcmp(ans10,a)==0 || strcmp(ans10,A)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option A\n\n");
                                }
                        }
                        else if(agr2=='n' || agr2=='N')
                        {
                                printf("You cannot continue to Round 3 if you Quit here\nEnter 'y' to Quit and 'n' to skip round 2\n");                                scanf(" %c",&agr3);
                                if(agr3=='y' || agr3=='Y')
                                {
                                        if(sum>=0)
                                                printf("Your score is: %d\n",sum);
                                        else
                                        {
                                                sum=sum+20;
                                                sum1=20-sum;
                                                printf("Your score is: -%d\n",sum1);
                                        }
                                        printf("\nPlease visit Again\n\tTHANK YOU\n");
                                        return 0;
                                }
                                else if(agr3=='n' || agr3=='N')
                                        printf("Thanks for Continuing\n");
                                else
                                {
                                        printf("\n\t\t\tERROR\n\tWrong Key Entered\n");
                                        return 0;
                                }
                        }
                        else
                        {
                                printf("\n\t\t\tERROR\n\tWrong Key Entered\n");
                                return 0;
                        }
                        printf("Do you want to continue to Round 3\nIf yes enter 'y' and to quit enter 'n'\n");
                        scanf(" %c",&agr4);
                        if(agr4=='y' || agr4=='Y')
                        {
                                printf("\n\t\t\tROUND THREE\n\n");
                                printf("11. Which of these Indian movies did not get nominated for Best Foreign Language Film at the Oscars?\n A. Mother India\n B. Slumdog Millionaire\n C. Lagaan\n D. Salaam Bombay!\n");
                                scanf(" %[a-d A-D]",ans11);
                                if(strcmp(ans11,b)==0 || strcmp(ans11,B)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option B\n\n");
                                }
                                printf("12. With how many heroines did Nag Danced in his special song in the Movie KING?\n A. 6\n B. 10\n C. 8\n D. 9\n");
                                scanf(" %[a-d A-D]",ans12);
                                if(strcmp(ans12,c)==0 || strcmp(ans12,C)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option C\n\n");
                                }
                                printf("13. Who is the singer sang the song 'Pillagali Allari ' in the movie ATHADU?\n A. Sunitha\n B. Usha\n C. Kousalya\n D. Shreya Ghoshal\n");
                                scanf(" %[a-d A-D]",ans13);
                                if(strcmp(ans13,d)==0 || strcmp(ans13,D)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option D\n\n");
                                }
                                printf("14. Gowri Pandit movie.\n A. Ygnam\n B. Santhosham\n C. Sri Ram\n D. Aandrudu\n");
                                scanf(" %[a-d A-D]",ans14);
                                if(strcmp(ans14,d)==0 || strcmp(ans14,D)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option D\n\n");
                                }
                                printf("15. Sr NTR first movie:\n A. Mana desam\n B. Pathala biravi\n C. Yama gola\n D. Mejar chandrakanth\n");
                                scanf(" %[a-d A-D]",ans15);
                                if(strcmp(ans15,a)==0 || strcmp(ans15,A)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option A\n\n");
                                }
                        }
                        else if(agr4=='n' || agr4=='N')
                                printf("\n");
                        else
                        {
                                printf("\n\t\t\tERROR\n\tWrong Key Entered\n");
                                return 0;
                        }
                }
                if(o==3)
                {
                        printf("Do You want to continue to Round one(y/n)\nEnter your Choice(y/n)\n");
                        scanf(" %c",&agr);
                        if(agr=='y' || agr=='Y')
                        {
                                printf("\n\t\t\tROUND ONE\n\n");
                                printf("1. Who is the director of movie ‘Lagaan’?\n A. Aamir Khan\n B. Sajid Khan\n C. Ashutosh Gowariker\n D. None of these\n");
                                scanf(" %[a-d A-D]",ans1);
                                if(strcmp(ans1,c)==0 || strcmp(ans1,C)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option C\n\n");
                                }
                                printf("2. Who won Dada Saheb Phalke Award in 2018?\n A. Vinod Khanna\n B. Shashi Kapoor\n C. Kasinathuni Viswanath\n D. None of these\n");
                                scanf(" %[a-d A-D]",ans2);
                                if(strcmp(ans2,a)==0 || strcmp(ans2,A)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option A\n\n");
                                }
                                printf("3. Who was the director of famous movie Mughal-E-Azam?\n A. K Asif\n B. Mehboob Khan\n C. S Ali Raza\n D. None of these\n");
                                scanf(" %[a-d A-D]",ans3);
                                if(strcmp(ans3,a)==0 || strcmp(ans3,A)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option A\n\n");
                                }
                                printf("4. Which movie has been chosen as the India’s official entry to Oscar 2019?\n A. Newton\n B. Smile Pinki\n C. Village Rockstars\n D. None of these\n");
                                scanf(" %[a-d A-D]",ans4);
                                if(strcmp(ans4,c)==0 || strcmp(ans4,C)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option C\n\n");
                                }
                                printf("5. How many Oscar awards was won by ‘Slumdog Millionaire’ movie?\n A. 5\n B. 10\n C. 8\n D. 7\n");
                                scanf(" %[a-d A-D]",ans5);
                                if(strcmp(ans5,c)==0 || strcmp(ans5,C)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option C\n\n");
                                }
                        }
                        else if(agr=='n' || agr=='N')
                        {
                                printf("You cannot continue to round 2 if you skip here\nIf you want to quit enter 'y' and 'n' to skip round 'n'\n");
                                scanf(" %c",&agr1);
                                if(agr1=='y'|| agr1=='Y')
                                {
                                        printf("\nPlease Visit Again\n\t\t\tTHANK YOU\n");
                                        return 0;
                                }
                                else if(agr1=='n' || agr1=='N')
                                        printf("Thanks for Continuing\n");
                                else
                                {
                                        printf("\n\t\t\tERROR\n\tWrong Key Entered\n");
                                        return 0;
                                }
                        }
                        else
                        {
                                printf("\n\t\t\tERROR\n\tWrong Key Entered\n");
                                return 0;
                        }
                        printf("Do you want to continue to Round 2\nIf yes enter 'y' and to quit enter 'n'\n");
                        scanf(" %c",&agr2);
                        if(agr2=='y' || agr2=='Y')
                        {
                                printf("\n\t\t\tROUND TWO\n\n");
                                printf("6. How many times AR Rahman was nominated for Oscar?\n A. 4\n B. 1\n C. 2\n D. None of these\n");
                                scanf(" %[a-d A-D]",ans6);
                                if(strcmp(ans6,c)==0 || strcmp(ans6,C)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option C\n\n");
                                }
                                printf("7. In which film did Trisha start her career?\n A. Pourname\n B. Yuva\n C. Varsham\n D. Jodi\n");
                                scanf(" %[a-d A-D]",ans7);
                                if(strcmp(ans7,d)==0 || strcmp(ans7,D)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option D\n\n");
                                }
                                printf("8. We can find this character or characters in which movie?- Mr. Krabs\n A. Sonic the Hedgehog\n B. Soul\n C. Trolls world tour\n D. The sponge Bob Movie\n");
                                scanf(" %[a-d A-D]",ans8);
                                if(strcmp(ans8,d)==0 || strcmp(ans8,D)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option D\n\n");
                                }
                                printf("9. We can find this character or characters in which movie?-Shaggy Rogers\n A. Onward\n B. Bad boys for life\n C. Scoob!\n D. Birds of Pray\n");
                                scanf(" %[a-d A-D]",ans9);
                                if(strcmp(ans9,c)==0 || strcmp(ans9,C)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option C\n\n");
                                }
                                printf("10. We can find this character or characters in which movie?-Poppy\n A. Holidate\n B. Trolls World Tour\n C. One Night in Miame\n D. The trail of Chicago 7\n");
                                scanf(" %[a-d A-D]",ans10);
                                if(strcmp(ans10,b)==0 || strcmp(ans10,B)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option B\n\n");
                                }
                        }
                        else if(agr2=='n' || agr2=='N')
                        {
                                printf("You cannot continue to Round 3 if you Quit here\nEnter 'y' to Quit and 'n' to skip round 2\n");                                scanf(" %c",&agr3);
                                if(agr3=='y' || agr3=='Y')
                                {
                                        if(sum>=0)
                                                printf("Your score is: %d\n",sum);
                                        else
                                        {
                                                sum=sum+20;
                                                sum1=20-sum;
                                                printf("Your score is: -%d\n",sum1);
                                        }
                                        printf("\nPlease visit Again\n\tTHANK YOU\n");
                                        return 0;
                                }
                                else if(agr3=='n' || agr3=='N')
                                        printf("Thanks for Continuing\n");
                                else
                                {
                                        printf("\n\t\t\tERROR\n\tWrong Key Entered\n");
                                        return 0;
                                }
                        }
                        else
                        {
                                printf("\n\t\t\tERROR\n\tWrong Key Entered\n");
                                return 0;
                        }
                        printf("Do you want to continue to Round 3\nIf yes enter 'y' and to quit enter 'n'\n");
                        scanf(" %c",&agr4);
                        if(agr4=='y' || agr4=='Y')
                        {
                                printf("\n\t\t\tROUND THREE\n\n");
                                printf("11. We can find this character or characters in which movie?-Velma Dinkley\n A. Scoob!\n B. I Still Believe\n C. Enola Holmes\n D. Mank\n");
                                scanf(" %[a-d A-D]",ans11);
                                if(strcmp(ans11,a)==0 || strcmp(ans11,A)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option A\n\n");
                                }
                                printf("12. We can find this character or characters in which movie? - Grug\n A. Soul\n B. The King of Staten Island\n C. Dolittle\n D. The Croods\n");
                                scanf(" %[a-d A-D]",ans12);
                                if(strcmp(ans12,d)==0 || strcmp(ans12,D)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option D\n\n");
                                }
                                printf("13. We can find this character or characters in which movie?- Harley Quinn\n A. Birds of prey\n B. WW84\n C. The Invisible Man\n D. Bill and Ted\n");
                                scanf(" %[a-d A-D]",ans13);
                                if(strcmp(ans13,a)==0 || strcmp(ans13,A)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option A\n\n");
                                }
                                printf("14. We can find this character or characters in which movie?- Patrick\n A. The Croods\n B. The Spoge bob Movie\n C. Grandma's Call\n D. WW84\n");
                                scanf(" %[a-d A-D]",ans14);
                                if(strcmp(ans14,b)==0 || strcmp(ans14,B)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option B\n\n");
                                }
                                printf("15. We can find this character or characters in which movie?- Diana Prince\n A. WW84\n B. The Croods\n C. Grandma's Call\n D. Onward\n");
                                scanf(" %[a-d A-D]",ans15);
                                if(strcmp(ans15,a)==0 || strcmp(ans15,A)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option A\n\n");
                                }
                        }
                        else if(agr4=='n' || agr4=='N')
                                printf("\n");
                        else
                        {
                                printf("\n\t\t\tERROR\n\tWrong Key Entered\n");
                                return 0;
                        }
                }
                else if(o>3 && o<1)
                {
                        printf("\t\t\tERROR 404\n\tWrong Key Entered\n");
                        return 0;
                }
        }
        if(n==4)
        {
                printf("Enter the Difficulty Level among 1-3\n1. Easy\n2. Medium\n3. Hard\n");
                scanf("%d",&o);
                printf("Please enter your choice in the space left below every Question\nEach question Carries '5' Marks and'-1' for every wrong answer\n");
                if(o==1)
                {
                        printf("Do you want to Continue to Round 1?\nIf Yes Enter 'y' and to Quit enter 'n'\n");
                        scanf(" %c",&agr);
                        if(agr=='y' || agr=='Y')
                        {
                                printf("\n\t\t\tROUND ONE\n\n");
                                printf("1. Who is the Minister of Home Affairs?\n A. Narendra Modi\n B. Amit Shah\n C. Prakash Javdekar\n D. Harsh Vardhan\n");
                                scanf(" %[a-d A-D]",ans1);
                                printf("\n");
                                if(strcmp(ans1,b)==0 || strcmp(ans1,B)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                    sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option B\n\n");
                                }
                                printf("2. Who is the top Goal scorer in history of Football?\n A. Cristiano Ronaldo\n B. Lionel Messi\n C. Josef Bican\n D. Pele\n");
                                scanf(" %[a-d A-D]",ans2);
                                if(strcmp(ans2,c)==0 || strcmp(ans2,C)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option C\n\n");
                                }
                                printf("3. Who got first Oscar award in India?\n A. Anil Kapoor\n B. A.R Rahman\n C. Bhanu Athaiya\n D. None of these\n");
                                scanf(" %[a-d A-D]",ans3);
                                if(strcmp(ans3,c)==0 || strcmp(ans3,C)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option C\n\n");
                                }
                                printf("4. Who is the Minister of External Affairs?\n A. Subrahmanyam Jaishankar\n B. Arjun Munda\n C. Ramesh Pokhriyal\n D. Arun Jaitley\n");
                                scanf(" %[a-d A-D]",ans4);
                                printf("\n");
                                if(strcmp(ans4,a)==0 || strcmp(ans4,A)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe Answer is Option A\n\n");
                                }
                                printf("5. What is the National Sport of Sri Lanka?\n A. Cricket\n B. Rugby\n C. Volleyball\n D. Kabaddi\n");
                                scanf(" %[a-d A-D]",ans5);
                                if(strcmp(ans5,c)==0 || strcmp(ans5,C)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option C\n\n");
                                }
                        }
                        else if(agr=='n' || agr=='N')
                        {
                                printf("You cannot continue to round 2 if you skip here\nIf you want to quit enter 'y' and 'n' to skip round 'n'\n");
                                scanf(" %c",&agr1);
                                if(agr1=='y'|| agr1=='Y')
                                {
                                        printf("\nPlease Visit Again\n\t\t\tTHANK YOU\n");
                                        return 0;
                                }
                                else if(agr1=='n' || agr1=='N')
                                        printf("Thanks for Continuing\n");
                                else
                                {
                                        printf("\n\t\t\tERROR\n\tWrong Key Entered\n");
                                        return 0;
                                }
                        }
                        else
                        {
                                printf("\n\t\t\tERROR\n\tWrong Key Entered\n");
                                return 0;
                        }
                        printf("Do you want to continue to Round 2\nIf yes enter 'y' and to quit enter 'n'\n");
                        scanf(" %c",&agr2);
                        if(agr2=='y' || agr2=='Y')
                        {
                                printf("\n\t\t\tROUND TWO\n\n");
                                printf("6. Which team won the 2003 World Cup of cricket?\n A. Australia\n B. India\n C. Sri Lanka\n D. West Indies\n");
                                scanf(" %[a-d A-D]",ans6);
                                if(strcmp(ans6,a)==0 || strcmp(ans6,A)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option A\n\n");
                                }
                                printf("7. Which director has directed the most movies in India?\n A. Adhitya Chopra\n B. Rohit Shetty\n C. Rajkumar Hirani\n D. None of these\n");
                                scanf(" %[a-d A-D]",ans7);
                                if(strcmp(ans7,c)==0 || strcmp(ans7,C)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option C\n\n");
                                }
                                printf("8. Who is the President of BCCI?\n A. Sachin\n B. Sehwag\n C. Saurav Gunguly\n D. MS Dhoni\n");                                scanf(" %[a-d A-D]",ans8);
                                printf("\n");
                                if(strcmp(ans8,c)==0 || strcmp(ans8,C)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option C\n\n");
                                }
                                printf("9. Krishna Poonia is Associated with\n A. Hockey\n B. Chess\n C. Cricket\n D. Basket Ball\n");
                                scanf(" %[a-d A-D]",ans9);
                                if(strcmp(ans9,b)==0 || strcmp(ans9,B)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option B\n\n");
                                }
                                printf("10. Which was the first film to win the Filmfare Best Film Award?\n A. Boot Polish\n B. Jagriti\n C. Do Bigha Zamin\n D. None of these\n");
                                scanf(" %[a-d A-D]",ans10);
                                if(strcmp(ans10,c)==0 || strcmp(ans10,C)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option C\n\n");
                                }
                        }
                        else if(agr2=='n' || agr2=='N')
                        {
                                printf("You cannot continue to Round 3 if you Quit here\nEnter 'y' to Quit and 'n' to skip round 2\n");                                scanf(" %c",&agr3);
                                if(agr3=='y' || agr3=='Y')
                                {
                                        if(sum>=0)
                                                printf("Your score is: %d\n",sum);
                                        else
                                        {
                                                sum=sum+20;
                                                sum1=20-sum;
                                                printf("Your score is: -%d\n",sum1);
                                        }
                                        printf("\nPlease visit Again\n\tTHANK YOU\n");
                                        return 0;
                                }
                                else if(agr3=='n' || agr3=='N')
                                        printf("Thanks for Continuing\n");
                                else
                                {
                                        printf("\n\t\t\tERROR\n\tWrong Key Entered\n");
                                        return 0;
                                }
                        }
                        else
                        {
                                printf("\n\t\t\tERROR\n\tWrong Key Entered\n");
                                return 0;
                        }
                        printf("Do you want to continue to Round 3\nIf yes enter 'y' and to quit enter 'n'\n");
                        scanf(" %c",&agr4);
                        if(agr4=='y' || agr4=='Y')
                        {
                                printf("\n\t\t\tROUND THREE\n\n");
                                printf("11. Who is the Minister of Tribal affairs?\n A. Arjun Munda\n B. Dharmendra Pradhan\n C. Giriraj Singh\n D. D.V.S.Gowda\n");
                                scanf(" %[a-d A-D]",ans11);
                                printf("\n");
                                if(strcmp(ans11,a)==0 || strcmp(ans11,A)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option A\n\n");
                                }
                                printf("12. Virat Kohli is a Successful Captain for India in Which sport?\n A. Hockey\n B. Cricket\n C. Volley Ball\n D. Football\n");
                                scanf(" %[a-d A-D]",ans12);
                                if(strcmp(ans12,b)==0 || strcmp(ans12,B)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option B\n\n");
                                }
                                printf("13. Who was the director of the famous movie ‘Mother India’?\n A. K Asif\n B. Mehboob Khan\n C. Ramesh Sippy\n D. None of these\n");
                                scanf(" %[a-d A-D]",ans13);
                                if(strcmp(ans13,b)==0 || strcmp(ans13,B)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option B\n\n");
                                }
                                printf("14. Which is the Highest Grossing Movie of India?\n A. Bahubali 2:The Conclusion\n B. Kabaali\n C. Bajrangi Bhaijan\n D. Dangal\n");
                                scanf(" %[a-d A-D]",ans14);
                                printf("\n");
                                if(strcmp(ans14,d)==0 || strcmp(ans14,D)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option D\n\n");
                                }
                                printf("15. Eden Garden in Kolkata is _____ stadium\n A. Cricket\n B. Hockey\n C. Olympic\n D. Football\n");
                                scanf(" %[a-d A-D]",ans15);
                                if(strcmp(ans15,a)==0 || strcmp(ans15,A)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option A\n\n");
                                }
                        }
                        else if(agr4=='n' || agr4=='N')
                                printf("\n");
                        else
                        {
                                printf("\n\t\t\tERROR\n\tWrong Key Entered\n");
                                return 0;
                        }
                }
                if(o==2)
                {
                        printf("Do You want to continue to Round one(y/n)\nEnter your Choice(y/n)\n");
                        scanf(" %c",&agr);
                        if(agr=='y' || agr=='Y')
                        {
                                printf("\n\t\t\tROUND ONE\n\n");
                                printf("1. Which was the first Cinemascope film in Bollywood?\n A. Naya Daur\n B. Sholay\n C. Kaagaz Ke Phool\n D. None of these\n");
                                scanf(" %[a-d A-D]",ans1);
                                if(strcmp(ans1,c)==0 || strcmp(ans1,C)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option C\n\n");
                                }
                                printf("2. Who is the Minister of Micro,small and medium Enterprises?\n A. D.V.S.Gowda\n B. Rajnath Singh\n C. Nitin Gadkari\n D. Ravi Shankar Prasad\n");
                                scanf(" %[a-d A-d]",ans2);
                                printf("\n");
                                if(strcmp(ans2,c)==0 || strcmp(ans2,C)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option C\n\n");
                                }
                                printf("3. Last Olympic Gold medal won by Indian Hockey Team at\n A. 1964 Japan Olympic\n B. 1980 Moscow Olympic\n C. 1972 Munich\n D. 1992 Barcelona, Spain\n");
                                scanf(" %[a-d A-D]",ans3);
                                if(strcmp(ans3,b)==0 || strcmp(ans3,B)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the Answer\nThe answer is Option B\n\n");
                                }
                                printf("4. Who is the director for the movie Jalsa?\n A. Srinu Vaitla\n B. Trivikram\n C. VV Vinayak\n D. None of these\n");
                                scanf(" %[a-d A-D]",ans4);
                                if(strcmp(ans4,b)==0 || strcmp(ans4,B)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option B\n\n");
                                }
                                printf("5. Who is the Minister of Law and justice?\n A. Ravi Shankar Prasad\n B. Dharmendra Pradhan\n C. Narendra Singh Tomar\n D. Ramesh Pokhriyal\n");
                                scanf(" %[a-d A-D]",ans5);
                                printf("\n");
                                if(strcmp(ans5,a)==0 || strcmp(ans5,A)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option A\n\n");
                                }
                        }
                        else if(agr=='n' || agr=='N')
                        {
                                printf("You cannot continue to round 2 if you skip here\nIf you want to quit enter 'y' and 'n' to skip round 'n'\n");
                                scanf(" %c",&agr1);
                                if(agr1=='y'|| agr1=='Y')
                                {
                                        printf("\nPlease Visit Again\n\t\t\tTHANK YOU\n");
                                        return 0;
                                }
                                else if(agr1=='n' || agr1=='N')
                                        printf("Thanks for Continuing\n");
                                else
                                {
                                        printf("\n\t\t\tERROR\n\tWrong Key Entered\n");
                                        return 0;
                                }
                        }
                        else
                        {
                                printf("\n\t\t\tERROR\n\tWrong Key Entered\n");
                                return 0;
                        }
                        printf("Do you want to continue to Round 2\nIf yes enter 'y' and to quit enter 'n'\n");
                        scanf(" %c",&agr2);
                        if(agr2=='y' || agr2=='Y')
                        {
                                printf("\n\t\t\tROUND TWO\n\n");
                                printf("6. Which team won the 2003 World Cup of cricket?\n A. Australia\n B. India\n C. Sri Lanka\n D. West Indies\n");
                                scanf(" %[a-d A-D]",ans6);
                                if(strcmp(ans6,a)==0 || strcmp(ans6,A)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option A\n\n");
                                }
                                printf("7. which is the Upcoming Rajamouli Project?\n A. Bharat\n B. Robo 3.o\n C. Ramayan\n D. RRR\n");
                                scanf(" %[a-d A-D]",ans7);
                                if(strcmp(ans7,d)==0 || strcmp(ans7,D)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option D\n\n");
                                }
                                printf("8. Who is the Minister of Panchayati Raj?\n A. Pralhad Joshi\n B. Piyush Goyal\n C. Narendra Singh Tomar\n D. Thawar Chand Gelhot\n");
                                scanf(" %[a-d A-D]",ans8);
                                printf("\n");
                                if(strcmp(ans8,c)==0 || strcmp(ans8,C)==0)
                                {
                                    sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option C\n\n");
                                }
                                printf("9. Total Olympic Medals won by India in 2012\n A. 5\n B. 4\n C. 6\n D. 9\n");
                                scanf(" %[a-d A-D]",ans9);
                                if(strcmp(ans9,c)==0 || strcmp(ans9,C)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option C\n\n");
                                }
                                printf("10. Tarun and Trisha movie.\n A. Nee manasu naaku telusu\n B. Stalin\n C. Nuvu leka nenu lenu\n D. Nuve nuve\n");
                                scanf(" %[a-d A-D]",ans10);
                                if(strcmp(ans10,a)==0 || strcmp(ans10,A)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option A\n\n");
                                }
                        }
                        else if(agr2=='n' || agr2=='N')
                        {
                                printf("You cannot continue to Round 3 if you Quit here\nEnter 'y' to Quit and 'n' to skip round 2\n");                                scanf(" %c",&agr3);
                                if(agr3=='y' || agr3=='Y')
                                {
                                        if(sum>=0)
                                                printf("Your score is: %d\n",sum);
                                        else
                                        {
                                                sum=sum+20;
                                                sum1=20-sum;
                                                printf("Your score is: -%d\n",sum1);
                                        }
                                        printf("\nPlease visit Again\n\tTHANK YOU\n");
                                        return 0;
                                }
                                else if(agr3=='n' || agr3=='N')
                                        printf("Thanks for Continuing\n");
                                else
                                {
                                        printf("\n\t\t\tERROR\n\tWrong Key Entered\n");
                                        return 0;
                                }
                        }
                        else
                        {
                                printf("\n\t\t\tERROR\n\tWrong Key Entered\n");
                                return 0;
                        }
                        printf("Do you want to continue to Round 3\nIf yes enter 'y' and to quit enter 'n'\n");
                        scanf(" %c",&agr4);
                        if(agr4=='y' || agr4=='Y')
                        {
                                printf("\n\t\t\tROUND THREE\n\n");
                                printf("11. Which of these Indian movies did not get nominated for Best Foreign Language Film at the Oscars?\n A. Mother India\n B. Slumdog Millionaire\n C. Lagaan\n D. Salaam Bombay!\n");
                                scanf(" %[a-d A-D]",ans11);
                                if(strcmp(ans11,b)==0 || strcmp(ans11,B)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option B\n\n");
                                }
                                printf("12. Who is the Minister of Consumer Affairs of Andhra Pradesh?\n A. Kodali Sri Venkateswara Rao(Kodali Nani)\n B. Gummanur Jayaram\n C. A.Siva Kumar\n D. Kurasala Kannababu\n");
                                scanf(" %[a-d A-D]",ans12);
                                printf("\n");
                                if(strcmp(ans12,a)==0 || strcmp(ans12,A)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option A\n\n");
                                }
                                printf("13. Who was India's first Football Captain\n A. PK Banerjee\n B. Shailan Manna\n C. SC Goswami\n D. Talimeren Ao\n");
                                scanf(" %[a-d A-D]",ans13);
                                    if(strcmp(ans13,d)==0 || strcmp(ans13,D)==0)
                                    {
                                            sum=sum+5;
                                            printf("\n*Answered Correctly*\n\n");
                                    }
                                    else
                                    {
                                            sum=sum-1;
                                            printf("\nOOPS! You have missed the answer\nThe answer is Option D\n\n");
                                    }
                                printf("14. Who is the Speaker of Lok Sabha?\n A. Somnath Chatterjee\n B. Meira Kumar\n C. Sumitra Mahajan\n D. Om Birla\n");
                                scanf(" %[a-d A-D]",ans14);
                                printf("\n");
                                if(strcmp(ans14,d)==0 || strcmp(ans14,D)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option D\n\n");
                                }
                                printf("15. Which one is the oldest Football Club in India\n A. Mohun Bagan A.C\n B. East Bengal FC\n C. Mohammedan SC\n D. Mahindra United\n");
                                scanf(" %[a-d A-D]",ans15);
                                if(strcmp(ans15,a)==0 || strcmp(ans15,A)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option A\n\n");
                                }
                        }
                        else if(agr4=='n' || agr4=='N')
                                printf("\n");
                        else
                        {
                                printf("\n\t\t\tERROR\n\tWrong Key Entered\n");
                                return 0;
                        }
                }
                if(o==3)
                {
                        printf("Do You want to continue to Round one(y/n)\nEnter your Choice(y/n)\n");
                        scanf(" %c",&agr);
                        if(agr=='y' || agr=='Y')
                        {
                                printf("\n\t\t\tROUND ONE\n\n");
                                printf("1. Who hold the National Record in 100m sprint running at 10.30sec\n A. Bahadur Prasad\n B. KM Binu\n C. Anil Kumar Prakash\n D. PT Usha\n");
                                scanf(" %[a-d A-D]",ans1);
                                if(strcmp(ans1,c)==0 || strcmp(ans1,C)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option C\n\n");
                                }
                                printf("2. Who won Dada Saheb Phalke Award in 2018?\n A. Vinod Khanna\n B. Shashi Kapoor\n C. Kasinathuni Viswanath\n D. None of these\n");
                                scanf(" %[a-d A-D]",ans2);
                                if(strcmp(ans2,a)==0 || strcmp(ans2,A)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option A\n\n");
                                }
                                printf("3. How much Amount has been approved by the Cabinet for the Atmanirbhar Bharat Rojgar Yojana(ABRY)?\n A. Rs.22,810 crore\n B. Rs.22,510 crore\n C. Rs.22,110 crore\n D. Rs.22,310 crore\n");
                                scanf(" %[a-d A-D]",ans3);
                                printf("\n");
                                if(strcmp(ans3,a)==0 || strcmp(ans3,A)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option A\n\n");
                                }
                                printf("4. Who was the 1st Recepient of Rajiv Gandhi Khel Ratna Award\n A. Sunil Gavaskar\n B. Sachin Tendulkar\n C. Milkha Singh\n D. Viswanathan Anand \n");
                                scanf(" %[a-d A-D]",ans4);
                                if(strcmp(ans4,d)==0 || strcmp(ans4,D)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option D\n\n");
                                }
                                printf("5. How many Oscar awards was won by ‘Slumdog Millionaire’ movie?\n A. 5\n B. 10\n C. 8\n D. 7\n");
                                scanf(" %[a-d A-D]",ans5);
                                if(strcmp(ans5,c)==0 || strcmp(ans5,C)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option C\n\n");
                                }
                        }
                        else if(agr=='n' || agr=='N')
                        {
                                printf("You cannot continue to round 2 if you skip here\nIf you want to quit enter 'y' and 'n' to skip round 'n'\n");
                                scanf(" %c",&agr1);
                                if(agr1=='y'|| agr1=='Y')
                                {
                                        printf("\nPlease Visit Again\n\t\t\tTHANK YOU\n");
                                        return 0;
                                }
                                else if(agr1=='n' || agr1=='N')
                                        printf("Thanks for Continuing\n");
                                else
                                {
                                        printf("\n\t\t\tERROR\n\tWrong Key Entered\n");
                                        return 0;
                                }
                        }
                        else
                        {
                                printf("\n\t\t\tERROR\n\tWrong Key Entered\n");
                                return 0;
                        }
                        printf("Do you want to continue to Round 2\nIf yes enter 'y' and to quit enter 'n'\n");
                        scanf(" %c",&agr2);
                        if(agr2=='y' || agr2=='Y')
                        {
                                printf("\n\t\t\tROUND TWO\n\n");
                                printf("6. How many times AR Rahman was nominated for Oscar?\n A. 4\n B. 1\n C. 2\n D. None of these\n");
                                scanf(" %[a-d A-D]",ans6);
                                if(strcmp(ans6,c)==0 || strcmp(ans6,C)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option C\n\n");
                                }
                                printf("7. The National Centre for Divyang Empowermnet(NCDE) has been launched by CRPF in Which state?\n A. Maharashtra\n B. Telangana\n C. Karnataka\n D. Assam\n");
                                scanf(" %[a-d A-D]",ans7);
                                printf("\n");
                                if(strcmp(ans7,b)==0 || strcmp(ans7,B)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option B\n\n");
                                }
                                printf("8. First Sportsperson nominated for Rajya Sabha Membership\n A. Sachin Tendulkar\n B. Milkha Singh\n C. Sunil Gavaskar\n D. Navajot S Sindhu\n");
                                scanf(" %[a-d A-D]",ans8);
                                if(strcmp(ans8,a)==0 || strcmp(ans8,A)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                printf("\nOOPS! You have missed the answer\nThe answer is Option A\n\n");
                                }
                                printf("9. Ludonic Orban has recently resigned as Prime Minister of Which country?\n A. Hungary\n B. Romania\n C. Portugal\n D. Slovakia\n");
                                scanf(" %[a-d A-D]",ans9);
                                printf("\n");
                                if(strcmp(ans9,b)==0 || strcmp(ans9,B)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option B\n\n");
                                }
                                printf("10. Who is the 1st Indian player to win a Grand Slam tournament\n A. Mahesh Bhupati\n B. Leander Paes\n C. Sania Mirza\n D. Vijay Amritraj\n");
                                scanf(" %[a-d A-D]",ans10);
                                if(strcmp(ans10,a)==0 || strcmp(ans10,A)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option A\n\n");
                                }
                        }
                        else if(agr2=='n' || agr2=='N')
                        {
                                printf("You cannot continue to Round 3 if you Quit here\nEnter 'y' to Quit and 'n' to skip round 2\n");                                scanf(" %c",&agr3);
                                if(agr3=='y' || agr3=='Y')
                                {
                                        if(sum>=0)
                                                printf("Your score is: %d\n",sum);
                                        else
                                        {
                                                sum=sum+20;
                                                sum1=20-sum;
                                                printf("Your score is: -%d\n",sum1);
                                        }
                                        printf("\nPlease visit Again\n\tTHANK YOU\n");
                                        return 0;
                                }
                                else if(agr3=='n' || agr3=='N')
                                        printf("Thanks for Continuing\n");
                                else
                                {
                                        printf("\n\t\t\tERROR\n\tWrong Key Entered\n");
                                        return 0;
                                }
                        }
                        else
                        {
                                printf("\n\t\t\tERROR\n\tWrong Key Entered\n");
                                return 0;
                        }
                        printf("Do you want to continue to Round 3\nIf yes enter 'y' and to quit enter 'n'\n");
                        scanf(" %c",&agr4);
                        if(agr4=='y' || agr4=='Y')
                        {
                                printf("\n\t\t\tROUND THREE\n\n");
                                printf("11. Who is the Youngest Grandmaster in India\n A. V Anand\n B. Parimarjan Negi\n C. P Harikrishnan\n D. Koneru Hampi\n");
                                scanf(" %[a-d A-D]",ans11);
                                if(strcmp(ans11,b)==0 || strcmp(ans11,B)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option B\n\n");
                                }
                                printf("12. We can find this character or characters in which movie? - Grug\n A. Soul\n B. The King of Staten Island\n C. Dolittle\n D. The Croods\n");
                                scanf(" %[a-d A-D]",ans12);
                                if(strcmp(ans12,d)==0 || strcmp(ans12,D)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option D\n\n");
                                }
                                printf("13. We can find this character or characters in which movie?- Harley Quinn\n A. Birds of prey\n B. WW84\n C. The Invisible Man\n D. Bill and Ted\n");
                                scanf(" %[a-d A-D]",ans13);
                                if(strcmp(ans13,a)==0 || strcmp(ans13,A)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option A\n\n");
                                }
                                printf("14. Name the Indian Athlete, who recently Hounered Sportsperson of the year in Male Category by FICCI\n A. Anup Sridhar\n B. Chetan Anand\n C. MS Dhoni\n D. Bajarang Punia\n");
                                scanf(" %[a-d A-D]",ans14);
                                printf("\n");
                                if(strcmp(ans14,d)==0 || strcmp(ans14,D)==0)
                                {
                                        sum=sum+5;
                                        printf("*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("OOPS! you have missed the answer\nThe answer is Option D\n\n");
                                }
                                printf("15. We can find this character or characters in which movie?- Diana Prince\n A. WW84\n B. The Croods\n C. Grandma's Call\n D. Onward\n");
                                scanf(" %[a-d A-D]",ans15);
                                if(strcmp(ans15,a)==0 || strcmp(ans15,A)==0)
                                {
                                        sum=sum+5;
                                        printf("\n*Answered Correctly*\n\n");
                                }
                                else
                                {
                                        sum=sum-1;
                                        printf("\nOOPS! You have missed the answer\nThe answer is Option A\n\n");
                                }
                        }
                        else if(agr4=='n' || agr4=='N')
                                printf("\n");
                        else
                        {
                                printf("\n\t\t\tERROR\n\tWrong Key Entered\n");
                                return 0;
                        }
                }
                else if(o>3 && o<1)
                {
                        printf("\t\t\tERROR 404\n\tWrong Key Entered\n");
                        return 0;
                }
        }
        else if(n<1 || n>4)
        {
                printf("\t\t\tERROR\n\tWrong Key Entered\n");
                return 0;
        }
        printf("%s ",name);
        if(sum<0)
        {
                sum=sum+100;
                sum1=100-sum;
        }
        if(sum==75)
                printf("You have Correctly answered all the Questions\nYour score is %d\n",sum);
        else if(sum==69)
                printf("You have Correctly answered 14 out of 15 Questions\nYour score is %d\n",sum);
        else if(sum==63)
                printf("You have Correctly answered 13 out of 15 Questions\nYour score is %d\n",sum);
        else if(sum==57)
                printf("You have Correctly answered 12 out of 15 Questions\nYour score is %d\n",sum);
        else if(sum==51)
                printf("You have Correctly answered 11 out of 15 Questions\nYour score is %d\n",sum);
        else if(sum==45)
                printf("You have Correctly answered 10 out of 15 Questions\nYour score is %d\n",sum);
        else if(sum==39)
                printf("You have Correctly answered 9 out of 15 Questions\nYour score is %d\n",sum);
        else if(sum==33)
                printf("You have Correctly answered 8 out of 15 Questions\nYour score is %d\n",sum);
        else if(sum==27)
                printf("You have Correctly answered 7 out of 15 Questions\nYour score is %d\n",sum);
        else if(sum==21)
                printf("You have Correctly answered 6 out of 15 Questions\nYour score is %d\n",sum);
        else if(sum==15)
                printf("You have Correctly answered 5 out of 15 Questions\nYour score is %d\n",sum);
        else if(sum==9)
                printf("You have Correctly answered 4 out of 15 Questions\nYour score is %d\n",sum);
        else if(sum==3)
                printf("You have Correctly answered 3 out of 15 Questions\nYour score is %d\n",sum);
        else if(sum1==3)
                printf("You have Correctly answered 2 out of 15 Questions\nYour score is -%d\n",sum1);
        else if(sum1==9)
                printf("You have Correctly answered 1 out of 15 Questions\nYour score is -%d\n",sum1);
        else if(sum1==15)
                printf("You haven't Correctly answered even 1 out of 15 Questions\nYour score is -%d\n",sum1);
                else if(sum==50)
                printf("You have Correctly answered 10 out of 10 that you have attempted\nYour score is %d\n",sum);
        else if(sum==44)
                printf("You have Correctly answered 9 out of 10 that you have attempted\nYour score is %d\n",sum);
        else if(sum==38)
                printf("You have Correctly answered 8 out of 10 that you have attempted\nYour score is %d\n",sum);
        else if(sum==32)
                printf("You have Correctly answered 7 out of 10 that you have attempted\nYour score is %d\n",sum);
        else if(sum==26)
                printf("You have Correctly answered 6 out of 10 that you have attempted\nYour score is %d\n",sum);
        else if(sum==20)
                printf("You have Correctly answered 5 out of 10 that you have attempted\nYour score is %d\n",sum);
        else if(sum==14)
                printf("You have Correctly answered 4 out of 10 that you have attempted\nYour score is %d\n",sum);
        else if(sum==8)
                printf("You have Correctly answered 3 out of 10 that you have attempted\nYour score is %d\n",sum);
        else if(sum==2)
                printf("You have Correctly answered 2 out of 10 that you have attempted\nYour score is %d\n",sum);
        else if(sum1==4)
                printf("You have Correctly answered Only 1 out of 10 that you have attempted\nYour score is -%d\n",sum1);
        else if(sum1==10)
                printf("You haven't Correctly answered even 1 out of 10 that you have attempted\nYour score is -%d\n",sum1);
        else if(sum==25)
                printf("You have Correctly answered 5 out of 5 that you have attempted\nYour score is %d\n",sum);
        else if(sum==19)
                printf("You have Correctly answered 4 out of 5 that you have attempted\nYour score is %d\n",sum);
        else if(sum==13)
                printf("You have Correctly answered 3 out of 5 that you have attempted\nYour score is %d\n",sum);
        else if(sum==7)
                printf("You have Correctly answered 2 out of 5 that you have attempted\nYour score is %d\n",sum);
        else if(sum==1)
                printf("You have Correctly answered Only 1 out of 5 that you have attempted\nYour score is %d\n",sum);
        else if(sum1==5)
                printf("You haven't Correctly answered even 1 out of 5 that you have attempted\nYour score is -%d\n",sum1);
        else if(sum>0)
                printf("Your score is %d\n",sum);
        else if(sum==0)
                printf("Your score is 0\n");
        else if(sum<0)
                printf("Your score is -%d\n",sum);
        printf("\nDo you like to Attempt the Quiz Again?(y/n)\n");
        scanf(" %c",&yesrn);
        }
        printf("Please Visit Again\n\t\t\tTHANK YOU\n\n");
}