#include <iostream> 
#include <string>
void doubleLine();
void chorus();
void repeatJody(const std::string& line);

int main(){
    //first verse
    repeatJody("Rescue Ranger, Rescue Ranger where have you been?");
    repeatJody("Ive Been around the world and back again!");
    repeatJody("Rescue Ranger Rescue Ranger where did you go?");
    repeatJody("In a c-130 flying low!");
    repeatJody("Rescue Ranger Rescue Ranger, What did you do?");
    repeatJody("I went and killed some commies for me and you!");
    repeatJody("Rescue Ranger Rescue Ranger how did you get back?");
    repeatJody("In a black and gold body sack!");

    //second verse
    repeatJody("Up in the morning out of the rack!");
    repeatJody("Greeted by a mortar attack!");
    repeatJody("First sergeant rushes me off to chow!");
    repeatJody("But I dont eat it anyhow!");

    chorus();

    //verse 3
    repeatJody("Follow the big bird in the sky!");
    repeatJody("All will jump and some will die!");
    repeatJody("Off to battle we will go!");
    repeatJody("To live or die hell i dont know!");

    chorus();
    
    //verse 4
    repeatJody("Early at night its drizzlin rain!");
    repeatJody("I am hit but feel no pain!");
    repeatJody("For in my heart I have no fear!");
    repeatJody("For I know My god is near!");

    chorus();

    //verse 5
    repeatJody("The mortars and artilelry!");
    repeatJody("The screaming burst around me!");
    repeatJody("Jagged shrapnel on the fly!");
    repeatJody("Kills my buddy makes me cry!");

    chorus();


}


void doubleLine(){
    std::cout << "\n+---+";
    std::cout << "\n+---+";
    return;
}

void repeatJody(const std::string& line){
    std::cout << "CALL: " << line;
    doubleLine();
    std::cout << "ANSWER: " << line;
    doubleLine();
}

void chorus(){
    //chorus
    repeatJody("O hail O hail O CCT!");
    repeatJody("Queen of battle follow me!");
    repeatJody("A Rescue Rangers Life for me!");
    repeatJody("For nothing in this world is free!");
}


