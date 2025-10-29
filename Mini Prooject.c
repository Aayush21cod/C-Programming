#include <stdio.h>

int main(void){
    int c,a,s=0;
    
    printf("Welcome to the General knowledge quiz\n Select your quiz topic\n");
    printf("1.Technology\n");
    printf("2. Geography\n");
    printf("3. History\n");
    printf("\n");
    printf("Enter your Choice: ");
    scanf("%d",&c);
    
    switch (c) {
        case 1:
            printf("You have selected Technology\n");
            
            //Q1
            printf("Q1. Who is generally credited with inventing the World Wide Web\n");
            printf("1. Bill Gates\n2. Tim Berners-Lee\n3.Steve Jobs\n4. Vint Cerf\n");
            printf("Enter the Answer in number : ");
            scanf("%d", &a);
            
            if (a==2) {
                printf("Correct, you get 1 point\n");
                s++;
            }
            else printf("That's the wrong answer. The correct answer is 2. Tim Berners-Lee ");
            
            //Q2
            printf("Q2. What does URL stand for?\n");
            printf("1. Universal Resource Language\n2.vUnique Registration Line\n3. User Remote Link\n 4. Uniform Resource Locator");
            printf("Enter the Answer in number : ");
            scanf("%d", &a);
            
            if (a==4) {
                printf("Correct, you get 1 point\n");
                s++;
            }
            else printf("That's the wrong answer. The correct answer is 4. Uniform Resource Locator");
            
            //Q3
            printf("Q3. Which communication protocol is often seen at the beginning of a website address and ensures secure communication?");
            printf("1. FTP\n2. TCP/IP\n 3. HTTPS\n 4. SMIP");
            printf("Enter the Answer in number : ");
            scanf("%d", &a);
            
            if (a==3) {
                printf("Correct, you get 1 point\n");
                s++;
            }
            else printf("That's the wrong answer. The correct answer is 3. HTTPS");
            
            //Q4
            printf("Q4. What is the process of secretly monitoring network traffic for unauthorized access or information theft known as? ");
            printf("1. Sniffing\n2. Phishing\n3. Spoofing\n4. Firewalling");
            printf("Enter the Answer in number : ");
            scanf("%d", &a);
            
            if (a==1) {
                printf("Correct, you get 1 point\n");
                s++;
            }
            else printf("That's the wrong answer. The correct answer is 1. Sniffing");
            
            //Q5
            printf("Q5.What popular video platform was originally co-founded by three former PayPal employees in 2005?");
            printf("1. Vimeo\n2. Netflix\n3. Hulu\n4. Youtube");
            printf("Enter the Answer in number : ");
            scanf("%d", &a);
            
            if (a==4) {
                printf("Correct, you get 1 point\n");
                s++;
            }
            else printf("That's the wrong answer. The correct answer is 4. Youtube");
            
                    printf("Another day of the week or an invalid input\n");
            break;
            
            
        case 2:
            printf("You have selected Geography\n");
            
            //Q1
            printf("Q1. The Statue of Liberty was a gift to the United States from which country?");
            printf("1. United Kingdom\n2. Spain\n3. Canada\n 4. France\n");
            printf("Enter the Answer in number : ");
            scanf("%d", &a);
            
            if (a==4) {
                printf("Correct, you get 1 point\n");
                s++;
            }
            else printf("That's the wrong answer. The correct answer is 4. France");
            
            //Q2
            printf("Q2. The Great Barrier Reef, the world's largest coral reef system, is located off the coast of which country?");
            printf("1. New Zealand\n2. Indonesia\n 3. Australia\n 4. Philippines");
            printf("Enter the Answer in number : ");
            scanf("%d", &a);
            
            if (a==3) {
                printf("Correct, you get 1 point\n");
                s++;
            }
            else printf("That's the wrong answer. The correct answer is 3. Australia");
            
            //Q3
            printf("Q3. The Andes Mountains, the world's longest continental mountain range, run along the western edge of which continent?");
            printf("1. North America\n2. Asia\n3. South America\n4. Africa");
            printf("Enter the Answer in number : ");
            scanf("%d", &a);
            
            if (a==3) {
                printf("Correct, you get 1 point\n");
                s++;
            }
            else printf("That's the wrong answer. The correct answer is 3. South America");
            
            //Q4
            printf("Q4. Which major mountain range separates the continents of Europe and Asia?");
            printf("1. Alps\n2. Himalayas\n3. Rocky Mountains\n4. Ural Mountains");
            printf("Enter the Answer in number : ");
            scanf("%d", &a);
            
            if (a==4) {
                printf("Correct, you get 1 point\n");
                s++;
            }
            else printf("That's the wrong answer. The correct answer is 4. Ural Mountains");
            
            //Q5
            printf("Q5.Which capital city sits on the River Thames and is home to the landmark Buckingham Palace?");
            printf("1. London\n2. Paris\n3. Dublin\n4. Amsterdam");
            printf("Enter the Answer in number : ");
            scanf("%d", &a);
            
            if (a==1) {
                printf("Correct, you get 1 point\n");
                s++;
            }
            else printf("That's the wrong answer. The correct answer is 1. London");
            break;
            
        
        case 3:
            printf("You have selected History\n");
            
            //Q1
            printf("Q1. What year did India gain independence from British rule? A. 1939 B. 1947 C. 1950 D. 1962?");
            printf("1. 1939\n2. 1947\n3. 1950\n 4. 1962\n");
            printf("Enter the Answer in number : ");
            scanf("%d", &a);
            
            if (a==2) {
                printf("Correct, you get 1 point\n");
                s++;
            }
            else printf("That's the wrong answer. The correct answer is 2. 1947");
            
            //Q2
            printf("Q2. Which country suffered the most total casualties (military and civilian) in World War II?");
            printf("1. Germary\n2. China\n 3. Japan\n 4. Soviet  Union (USSR)");
            printf("Enter the Answer in number : ");
            scanf("%d", &a);
            
            if (a==4) {
                printf("Correct, you get 1 point\n");
                s++;
            }
            else printf("That's the wrong answer. The correct answer is 4. USSR");
            
            //Q3
            printf("Q3. The period of intense political violence during the French Revolution, characterized by mass executions, was known as the?");
            printf("1. Great Fear\n2. Reign of Terror\n 3. Thermidorian Reaction\n 4. Directory");
            printf("Enter the Answer in number : ");
            scanf("%d", &a);
            
            if (a==2) {
                printf("Correct, you get 1 point\n");
                s++;
            }
            else printf("That's the wrong answer. The correct answer is 2. Resign of Terror");
            
            //Q4
            printf("Q4.The Jallianwala Bagh Massacre occurred in which year?");
            printf("1. 1909\n2. 1918\n3. 1919\n4. 1920");
            printf("Enter the Answer in number : ");
            scanf("%d", &a);
            
            if (a==3) {
                printf("Correct, you get 1 point\n");
                s++;
            }
            else printf("That's the wrong answer. The correct answer is 3. 1919");
            
            //Q5
            printf("Q5.Who was the only female ruler to ever sit on the throne of the Delhi Sultanate?");
            printf("1. Nur Jahan\n2. Jahanara Begum\n3. Hamida Banu Begum\n4. Razia Sultan");
            printf("Enter the Answer in number : ");
            scanf("%d", &a);
            
            if (a==4) {
                printf("Correct, you get 1 point\n");
                s++;
            }
            else printf("That's the wrong answer. The correct answer is 4. Razia Sultan");
        default: printf("Something Went Wrong TRY AGAIN");
            break;
    }
    return 0;
}
