#include <iostream>
#include <map> //Always outputs in Ascending order
//#include <unordered_map>
#include <list>
using namespace std;

int main(){
    map<string,string> my_dictionary;
    my_dictionary.insert(pair<string,string>("Orange","Komla"));
    my_dictionary.insert(pair<string,string>("Apple","Apel"));
    my_dictionary.insert(pair<string,string>("Jack Fruit","Kathal"));
    my_dictionary.insert(pair<string,string>("Water Melon","Tormuj"));
    my_dictionary.insert(pair<string,string>("Lichi","Lichu"));

    //changing a value of any key
    my_dictionary["Orange"] = "Komola";
    int size = my_dictionary.size();//size of the map
    cout<<size<<'\n';
    //to delete any key with its value
    my_dictionary.erase("Apple");
    //to clear the whole map
    //my_dictionary.clear();
    

    for(auto pair : my_dictionary){
        cout<<pair.first<<" - "<<pair.second<<'\n';
    }


    /*Map X list*/

    map<string,list<string>> pokedesk;

    list<string> pikachu_attacks{"Electro","Blast","Tail Slap"};
    list<string> rhino_attacks{"Hornet","Thickr","Power Punch"};
    list<string> birdy_attacks{"Sonic","Splash","Feather Clap"};

    pokedesk.insert(pair<string,list<string>>("Pikachu",pikachu_attacks));
    pokedesk.insert(pair<string,list<string>>("Rhino",rhino_attacks));
    pokedesk.insert(pair<string,list<string>>("Birdie",birdy_attacks));

    for(auto pair : pokedesk){
        cout<<pair.first<<" - ";
        for(auto attack : pair.second){
            cout<<attack<<", ";
        }
        cout<<'\n';
    }
}