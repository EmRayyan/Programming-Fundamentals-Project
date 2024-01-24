#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main(){
	for(int r=1;r>0;r++){
		float milk=99.99, eggs=120.00, bread=110.00, sugar=174.99, rice=149.99, yoghurt=50.00,
		floor=199.99, spices=79.99, meat=220.00, tea=74.99, oil=130.00, friuts=250.00, vegetables=299.99,
		butter=89.99, cheese=125.00;
		int item_list;
		float brd_amt=0, btr_amt=0, chz_amt=0, egg_amt=0, flr_amt=0, frt_amt=0, met_amt=0,
		mlk_amt=0, ol_amt=0, ric_amt=0, sgr_amt=0, spc_amt=0, T_amt=0, veg_amt=0, yog_amt=0;
		float total_amount;
		system("cls");
	    printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
        printf("\n||||||||||||                                                   ||||||||||||");
        printf("\n||||||||||||           WELCOME TO OUR GROCERY STORE            ||||||||||||");
        printf("\n||||||||||||                                                   ||||||||||||");
        printf("\n|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
	    printf("\n\n---------------------------------------------------------------------------\n");
   	    printf("\t\t\t\t MAIN MENU\n");
   	    printf("---------------------------------------------------------------------------\n\n");
	    printf("START SHOPPING\t\t[1]\nITEM DETAILS\t\t[2]\nCREDIT\t\t\t[3]\nEXIT\t\t\t[0]\n\n\n\nSelect an option => ");
	    int ss;
	    scanf("%d", & ss);
	    if(ss==1){
	    	system("cls");
	    	for(int loop=1;loop>0;loop++){
				printf("*******************ITEM LIST*****************\n\n01. Bread\t06. Friuts\t11. Sugar\n02. Butter\t07. Meat\t12. Spices\n03. Cheese\t08. Milk\t13. Tea\n04. Eggs\t09. Oil\t\t14. Vegetables\n05. Floor\t10. Rice\t15. Yoghurt\n\n*********************************************\n\nGET A DISCOUNT OFFER ON\nRs. 1000 OR ABOVE SHOPPING\n\n*********************************************\n");
				printf("\nSelect your item: ");
				scanf("%d", &item_list);
	    		printf("\n**************************\n");
				switch(item_list){
					case 01:
						printf("Item Name: Bread\nItem Price = Rs %.2f (12 Slices Packet)\nEnter item quantity: ", bread);
			    		int brd;
			    		scanf("%d", &brd);
    					brd_amt=brd*bread;
			    		printf("\n**************************\n");
			    		break;
					case 02:
						printf("Item Name: Butter\nItem Price = Rs %.2f (250 g Bar)\nEnter item quantity: ", butter);
			    		int btr;
			    		scanf("%d", &btr);
    					btr_amt=btr*butter;
			    		printf("\n**************************\n");
			    		break;
					case 03:
						printf("Item Name: Cheese\nItem Price = Rs %.2f (250 g Bar)\nEnter item quantity: ", cheese);
			    		int chz;
			    		scanf("%d", &chz);
    					chz_amt=chz*cheese;
			    		printf("\n**************************\n");
			    		break;
					case 04:
						printf("Item Name: Eggs\nItem Price = Rs %.2f (1 Dozen Tray)\nEnter item quantity: ", eggs);
			    		int egg;
			    		scanf("%d", &egg);
    					egg_amt=egg*eggs;
			    		printf("\n**************************\n");
			    		break;
					case 05:
						printf("Item Name: Floor\nItem Price = Rs %.2f (1 Kg Packet)\nEnter item quantity: ", floor);
			    		int flr;
			    		scanf("%d", &flr);
    					flr_amt=flr*floor;
			    		printf("\n**************************\n");
			    		break;
					case 06:
						printf("Item Name: Mix-Friuts\nItem Price = Rs %.2f (1 Kg Packet)\nEnter item quantity: ", friuts);
			    		int frt;
			    		scanf("%d", &frt);
    					frt_amt=frt*friuts;
			    		printf("\n**************************\n");
			    		break;
					case 07:
						printf("Item Name: Meat\nItem Price = Rs %.2f (1 Kg Packet)\nEnter item quantity: ", meat);
			    		int met;
			    		scanf("%d", &met);
    					met_amt=met*meat;
			    		printf("\n**************************\n");
			    		break;
					case 8:
						printf("Item Name: Milk\nItem Price = Rs %.2f (500 ml Bottle)\nEnter item quantity: ", milk);
			    		int mlk;
			    		scanf("%d", &mlk);
    					mlk_amt=mlk*milk;
			    		printf("\n**************************\n");
			    		break;
					case 9:
						printf("Item Name: Oil\nItem Price = Rs %.2f (1 Litre Pouch)\nEnter item quantity: ", oil);
			    		int ol;
			    		scanf("%d", &ol);
    					ol_amt=ol*oil;
			    		printf("\n**************************\n");
			    		break;
					case 10:
						printf("Item Name: Rice\nItem Price = Rs %.2f (1 Kg Packet)\nEnter item quantity: ", rice);
			    		int ric;
			    		scanf("%d", &ric);
    					ric_amt=ric*rice;
			    		printf("\n**************************\n");
			    		break;
					case 11:
						printf("Item Name: Sugar\nItem Price = Rs %.2f (1 Kg Packet)\nEnter item quantity: ", sugar);
			    		int sgr;
			    		scanf("%d", &sgr);
    					sgr_amt=sgr*sugar;
			    		printf("\n**************************\n");
			    		break;
					case 12:
						printf("Item Name: Spices\nItem Price = Rs %.2f (400 g Packet)\nEnter item quantity: ", spices);
			    		int spc;
			    		scanf("%d", &spc);
    					spc_amt=spc*spices;
			    		printf("\n**************************\n");
			    		break;
					case 13:
						printf("Item Name: Tea\nItem Price = Rs %.2f (1 Kg Packet)\nEnter item quantity: ", tea);
			    		int T;
			    		scanf("%d", &T);
    					T_amt=T*tea;
   			    		printf("\n**************************\n");
			    		break;
					case 14:
						printf("Item Name: Mix-Vegetables\nItem Price = Rs %.2f (1 Kg Packet)\nEnter item quantity: ", vegetables);
			    		int veg;
			    		scanf("%d", &T);
    					veg_amt=veg*vegetables;
   			    		printf("\n**************************\n");
			    		break;
					case 15:
						printf("Item Name: Yoghurt\nItem Price = Rs %.2f (250 g Pouch)\nEnter item quantity: ", yoghurt);
			    		int yog;
			    		scanf("%d", &yog);
    					yog_amt=yog*yoghurt;
			    		printf("\n**************************\n");
			    		break;
					default:
						printf("\nInvalid Option!!!\n");
			    		printf("\n************************\n\n");
				}
				printf("\nPress any number to continue shopping\nPress 0 to calculate bill: ");
				int brk;
				scanf("%d", &brk);
				if(brk==0)
				break;
				printf("\n************************\n\n");
			}
			system("cls");
			printf("************************\n");
			total_amount = (brd_amt+btr_amt+chz_amt+egg_amt+flr_amt+frt_amt+met_amt+mlk_amt+ol_amt+ric_amt+sgr_amt+spc_amt+T_amt+veg_amt+yog_amt);
			if(total_amount==0){
				printf("\nNo items selceted!!!\n");
				printf("\n************************\n");
			}
			else{
				printf("\nCalculating Sum...\n");
				float gst = total_amount * (0.18);
				printf("\nCalculating GST...\n");
				float gross_amount = gst + total_amount;
				printf("\nCalculating Gross Amount...\n");
				printf("\n************************\n");
				if(total_amount>=1000){
					for(int y=1;y>0;y++){
					printf("\nDo you want 10%% discount?\n1. Yes\n2. No\n\n");
					if(y!=1){
						printf("\nChoose the correct option: ");
					}
					else{
						printf("Choose an option: ");
					}
					int dis;
					scanf("%d", &dis);
					printf("\n************************\n");
					if(dis==1){
		        		for(int d=1;d<=3;d++){
		        			if(d==2){
		        				printf("\n2nd attempt!!\n\nEnter promo code (hint:arar) : ");
							}
							else if(d==3){
								printf("\nLast attempt!!!\n\nEnter promo code (hint:arar) : ");
							}
							else{
								printf("\nEnter promo code (hint:arar) : ");
							}
		            		int prdc;
		            		scanf("%d", &prdc);
		            		if(prdc==118118){
	            				system("cls");
      		            		printf("************************\n");
			            		printf("\nCalculating Discount...\n\nGenerating your bill...\n\nPlease wait...\n");
			            		float disc = total_amount * (0.1);
			            		float net_amount = gross_amount - disc;
   		                		printf("\n************************\n\n");
			            		printf("\n-----------------Your  Bill-----------------\n\n");
                        		printf("\n--------------------------------------------\n");
                        		printf("Total Amount\t\t\t= Rs %.2f\n", total_amount);
                        		printf("GST 18%%\t\t\t\t= Rs %.2f\n", gst);
                        		printf("Discount 10%%\t\t\t= Rs %.2f\n\n", disc);
                        		printf("Net Amount\t\t\t= Rs %.2f\n", net_amount);
                        		printf("\n--------------------------------------------\n");
                        		printf("\n-----------Thank you for shopping-----------\n");
			            		break;
		            		}
		            		else{	            		
					    		system("cls");
			            		printf("************************\n");
			            		printf("\nInvalid promo code!!!\n");
			            		if(d!=3){
			    	        		printf("\nPlease try again...\n");
				        		}
		    	        		printf("\n************************\n");
		    	        		if(d==3){
		    	        			printf("Generating your bill...\n\nPlease wait...\n");
									printf("\n************************\n\n");
									printf("\n-----------------Your  Bill-----------------\n\n");
    								printf("\n--------------------------------------------\n");
    								printf("Total Amount\t\t\t= Rs %.2f\n", total_amount);
    								printf("GST 18%%\t\t\t\t= Rs %.2f\n", gst);
    								printf("Discount \t\t\t= Rs 0.00\n\n");
    								printf("Net Amount\t\t\t= Rs %.2f\n", gross_amount);
    								printf("\n--------------------------------------------\n");
    								printf("\n-----------Thank you for shopping-----------\n");
								}
		            		}
		        		}
		    		break;
	        		}
	        		else if(dis==2){
			    		system("cls");
      		    		printf("************************\n");
		        		printf("\nGenerating your bill...\n\nPlease wait...\n");
	            		printf("\n************************\n\n");
    	        		printf("\n-----------------Your  Bill-----------------\n\n");
                		printf("\n--------------------------------------------\n");
                		printf("Total Amount\t\t\t= Rs %.2f\n", total_amount);
                		printf("GST 18%%\t\t\t\t= Rs %.2f\n", gst);
                		printf("Discount \t\t\t= Rs 0.00\n\n");
                		printf("Net Amount\t\t\t= Rs %.2f\n", gross_amount);
                		printf("\n--------------------------------------------\n");
                		printf("\n-----------Thank you for shopping-----------\n");
                		break;
	        		}
	        		else{
	        			system("cls");
  	        	    	printf("************************\n");
		    	    	printf("\nInvalid Option!!!\n");
   	        	    	printf("\n************************\n");
	        		}	
				}
				}
				else{
					system("cls");
      		    	printf("************************\n");
		        	printf("\nCalculating Sum...\n\nCalculating GST...\n\nGenerating your bill...\n\nPlease wait...\n");
	            	printf("\n************************\n\n");
    	        	printf("\n-----------------Your  Bill-----------------\n\n");
                	printf("\n--------------------------------------------\n");
                	printf("Total Amount\t\t\t= Rs %.2f\n", total_amount);
                	printf("GST 18%%\t\t\t\t= Rs %.2f\n", gst);
                	printf("Discount \t\t\t= Rs 0.00\n\n");
                	printf("Net Amount\t\t\t= Rs %.2f\n", gross_amount);
                	printf("\n--------------------------------------------\n");
                	printf("\n-----------Thank you for shopping-----------\n");
				}
			}
			printf("\n\n\n*******************************************\n");
	    	printf("Press any key to return to the main menu... ");
			getch();
	    }
	    else if(ss==2){
	    	system("cls");
	    	printf("\t\t\t    ------------------------------------------------\n");
			printf("\t\t\t    ------------                        ------------\n");
			printf("\t\t\t    ------------      ITEM DETAILS      ------------\n");
			printf("\t\t\t    ------------                        ------------\n");
			printf("\t\t\t    ------------------------------------------------\n\n");
			printf("---------------------------------------------------------------------------------------------------------\n\n");
			printf("Item No.: 01\t\t\t|\tItem No.:02\t\t\t|\tItem No.: 03\n");
			printf("Item Name: Bread\t\t|\tItem Name: Butter\t\t|\tItem Name: Cheese\n");
			printf("Item quantity: 12 Slices Pac.\t|\tItem quantity: 250 g Bar\t|\tItem quantity: 250 g bar\n");
			printf("Item Price = Rs %.2f\t\t|\tItem Price = Rs %.2f\t\t|\tItem Price = Rs %.2f", bread, butter, cheese);
			printf("\n\n---------------------------------------------------------------------------------------------------------\n\n");
			printf("Item No.: 04\t\t\t|\tItem No.:05\t\t\t|\tItem No.: 06\n");
			printf("Item Name: Eggs\t\t\t|\tItem Name: Floor\t\t|\tItem Name: Mix-Friuts\n");
			printf("Item quantity: 1 Dozen Tray\t|\tItem quantity: 1 Kg Pac.\t|\tItem quantity: 1 Kg Pac.\n");
			printf("Item Price = Rs %.2f\t\t|\tItem Price = Rs %.2f\t\t|\tItem Price = Rs %.2f", eggs, floor, friuts);
			printf("\n\n---------------------------------------------------------------------------------------------------------\n\n");
			printf("Item No.: 07\t\t\t|\tItem No.:08\t\t\t|\tItem No.: 09\n");
			printf("Item Name: Meat\t\t\t|\tItem Name: Milk\t\t\t|\tItem Name: Oil\n");
			printf("Item quantity: 1 Kg Pac.\t|\tItem quantity: 500 ml Bottle\t|\tItem quantity: 1 Litre Pouch\n");
			printf("Item Price = Rs %.2f\t\t|\tItem Price = Rs %.2f\t\t|\tItem Price = Rs %.2f", meat, milk, oil);
			printf("\n\n---------------------------------------------------------------------------------------------------------\n\n");
			printf("Item No.: 10\t\t\t|\tItem No.:11\t\t\t|\tItem No.: 12\n");
			printf("Item Name: Rice\t\t\t|\tItem Name: Sugar\t\t|\tItem Name: Spices\n");
			printf("Item quantity: 1 Kg Pac.\t|\tItem quantity: 1 Kg Pac.\t|\tItem quantity: 400 g Pac.\n");
			printf("Item Price = Rs %.2f\t\t|\tItem Price = Rs %.2f\t\t|\tItem Price = Rs %.2f", rice, sugar, spices);
			printf("\n\n---------------------------------------------------------------------------------------------------------\n\n");
			printf("Item No.: 13\t\t\t|\tItem No.:14\t\t\t|\tItem No.: 15\n");
			printf("Item Name: Tea\t\t\t|\tItem Name: Mix-Vegetables\t|\tItem Name: Yoghurt\n");
			printf("Item quantity: 1 Kg Pac.\t|\tItem quantity: 1 Kg Pac.\t|\tItem quantity: 250 g Pouch\n");
			printf("Item Price = Rs %.2f\t\t|\tItem Price = Rs %.2f\t\t|\tItem Price = Rs %.2f", tea, vegetables, yoghurt);
			printf("\n\n\n---------------------------------------------------------------------------------------------------------\n");
			printf("---------------------------------------------------------------------------------------------------------\n\n");
			printf("\n\n\n*******************************************\n");
	    	printf("Press any key to return to the main menu... ");
	    	getch();
		}
		else if(ss==3){
			system("cls");
			printf("      ------------------------------------------------\n");
			printf("      ------------                        ------------\n");
			printf("      ------------         CREDIT         ------------\n");
			printf("      ------------                        ------------\n");
			printf("      ------------------------------------------------\n\n");
			printf("------------------------------------------------------------\n");
			printf("------------------        OUR  TEAM        -----------------\n");
			printf("------------------------------------------------------------\n\n");
			printf("Name: Muhammad Anas Awan\t|\tName: Umm-e-Rubab\nStudent Id: BCB-23S-018\t\t|\tStudent Id: BCB-23S-057\nRole: Debugging\t\t\t|\tRole: Idea & Designing\n\n\n");
			printf("Name: Muhammad Ali\t\t|\tName: Muhammad Rayyan Shaikh\nStudent Id: BCB-23S-006\t\t|\tStudent Id: BCB-23S-046\nRole: Code Implementation\t|\tRole: Algorithm & logic building\n\n");
			printf("------------------------------------------------------------\n");
			printf("      ------------------------------------------------\n\n");
			printf("\n\n\n*******************************************\n");
	    	printf("Press any key to return to the main menu... ");
	    	getch();
		}
    	else if(ss==0){
         	printf("\n\n\n\n\n---------------------------------\n");
            printf("\t   Good Bye!!!\n");
            printf("---------------------------------\n");
		    exit(0);
		}
	    else{
	        printf("\n\n************************************\n\n");
		    printf("\nInvalid option!!! Please try again... ");
	    }
	}
}
