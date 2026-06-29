#include<stdio.h>
#include<string.h>

struct ticket{
        int ticket_id;
        char name[20];
        char source[20];
        char  destination[15];
        char  date[15];
        int seat_no;
        float fare;
    };

 int main(){
    
    struct ticket l[100];
    int total_size = 2;
    
    l[0].ticket_id = 1212;
    strcpy(l[0].name, "Ramesh");
    strcpy(l[0].source, "Ayodhya");
    strcpy(l[0].destination, "Greater Noida");
    strcpy(l[0].date, "12/12/2025");
    l[0].seat_no = 101;
    l[0].fare = 800;

    l[1].ticket_id = 1213;
    strcpy(l[1].name, "Suresh");
    strcpy(l[1].source, "Delhi");
    strcpy(l[1].destination, "Greater Noida");
    strcpy(l[1].date, "25/05/2026");
    l[1].seat_no = 105;
    l[1].fare = 250;

    int n_ticket,option = 0;
    
    printf("\n>>>> Welcome to the Ticket Booking! <<<<\n\n");
    while(option != 7){

        printf("Choose an option: \n");
        printf("1.Book ticket\n");
        printf("2.View all booking\n");
        printf("3.Search booking\n");
        printf("4.Update booking\n");
        printf("5.Cancel ticket\n");
        printf("6.Check seat avaibility\n");
        printf("7.Exit\n");
        printf("Enter your option: ");
        scanf("%d",&option);

        if(option == 1){
            printf("How many ticket you want to book? : ");
            scanf("%d",&n_ticket);

            for(int i=total_size; i<(total_size+n_ticket); i++){
                printf("Enter Ticket id: ");
                scanf("%d",&l[i].ticket_id);
                printf("Enter name: ");
                scanf("%s",l[i].name);
                printf("Enter current location: ");
                scanf("%s",l[i].source);
                printf("Enter Destination: ");
                scanf("%s",l[i].destination);
                printf("Enter Date: ");
                scanf("%s",l[i].date);
                printf("Enter seat no.: ");
                scanf("%d",&l[i].seat_no);
                printf("Enter Fare: ");
                scanf("%f",&l[i].fare);
            }
            printf("\n\n--> Ticket Booking successfully!\n\n");
            total_size += n_ticket;
        }

        else if(option == 2){
            if(total_size == 0) printf("\n--> Ohh!!\n--> There is no any Booking !\n\n");
            else{
                printf("\n\nShowing Bookings ...\n\n");
                for(int i=0; i<total_size; i++){
                    printf("Ticket ID--> %d\n",l[i].ticket_id);
                    printf("Name--> %s\n",l[i].name);
                    printf("Source--> %s\n",l[i].source);
                    printf("Destination--> %s\n",l[i].destination);
                    printf("Date--> %s\n",l[i].date);
                    printf("Seat No.--> %d\n",l[i].seat_no);
                    printf("Fare--> %f\n\n",l[i].fare);
                }
                printf("\n--> Booking viewed successfully!\n\n");
            }
        }

        else if(option == 3){
            int id,target = -1;
            printf("Enter ticket id: ");
            scanf("%d",&id);

            for(int i=0; i<total_size; i++){
                if(id == l[i].ticket_id){
                    target = i;
                    break;
                }
            }

            if(target == -1){
                printf("\n\n--> Sorry!!\n--> There is no any Booking !\n\n");                
            }else{
                printf("\nTicket ID--> %d\n",l[target].ticket_id);
                printf("Name--> %s\n",l[target].name);
                printf("Source--> %s\n",l[target].source);
                printf("Destination--> %s\n",l[target].destination);
                printf("Date--> %s\n",l[target].date);
                printf("Seat No.--> %d\n",l[target].seat_no);
                printf("Fare--> %f\n\n",l[target].fare);
            }            
        }

        else if(option == 4){
            int id,target = -1;
            printf("Enter ticket id: ");
            scanf("%d",&id);

            for(int i=0; i<total_size; i++){
                if(id == l[i].ticket_id){
                    target = i;
                    break;
                }
            }

            if(target == -1){
                printf("\n\n--> Sorry!!\n--> There is no any Booking !\n\n");                
            }else{
                printf("Enter name: ");
                scanf("%s",l[target].name);
                printf("Enter current location: ");
                scanf("%s",l[target].source);
                printf("Enter Destination: ");
                scanf("%s",l[target].destination);
                printf("Enter Fare: ");
                scanf("%f",&l[target].fare);
                printf("\n--> Booking Updated successfully!\n\n");
            }
        }

        else if(option == 5){
            int id,target = -1;
            printf("Enter ticket id: ");
            scanf("%d",&id);

            for(int i=0; i<total_size; i++){
                if(id == l[i].ticket_id){
                    target = i;
                    break;
                }
            }

            if(target == -1){
                printf("\n\n--> Sorry!!\n--> There is no any Booking !\n\n");                
            }else{
                for(int i=target; i<total_size-1; i++){
                    l[i] = l[i+1];
                }
                total_size--;
                printf("\n--> Ticket cancelled !\n\n");
            }
        }

        else if(option == 6){
            int seat,target = -1;
            printf("Enter seat number: ");
            scanf("%d",&seat);

            for(int i=0; i<total_size; i++){
                if(seat == l[i].seat_no){
                    target = i;
                    break;
                }
            }

            if(target == -1){
                printf("\n\n--> Seat is Available!\n\n");                
            }else{
                printf("\n\n--> Seat is already booked!\n\n");
               
            }
            
        }

        else if(option == 7){
            printf("Thank you !!");
        }
    }

 return 0;
}