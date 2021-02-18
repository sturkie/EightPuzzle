#include <iostream>
#include <vector>

using namespace std;

void print_expand(int g, int h, vector<int> row1, vector<int> row2, vector<int> row3){
    cout << "The best state to expand with a g(n) = " << g << " and h(n) = " << h << "is...\n";
    
    //print current puzzle
    cout << "\t";
   for(int i=0; i < row1.size(); i++){
       cout << row1.at(i) << ' ';
   }
   cout << "\n\t";
   for(int i=0; i < row2.size(); i++){
       cout << row2.at(i) << ' ';
   }
   cout << "\n\t";
   for(int i=0; i < row3.size(); i++){
       cout << row3.at(i) << ' ';
   }
    
    cout << "\tExpanding this node...\n";
    
    return;
}

//essentialy A*
int general_search_algorithm(vector<vector<int> > puzzle, int heuristic){
    
    cout << "Entering GSA\n";
    
    
    return 0;
}

//A* with h(n) = 0
int uniform_cost_search(){
    cout << "Uniform Cost Search\n";
    return 0;
}

int misplaced_tile(){
    cout << "A* with the Misplaced Title heuristic\n";
    return 0;
}

int manhattan_distance(){
    cout << "A* with the Manhattan distance heuristic\n";
    return 0;
}


int main(){
    
    int puzzle_choice = 1;
    int algorithm_choice = 1;
    
    cout << "Welcome to the 8-puzzle solver!" << endl;
    cout << "Enter \"1\" to use a default puzzle, or enter \"2\" to enter your own puzzle: ";
    
    cin >> puzzle_choice;
                 
    vector<int> row1{1,2,3};
    vector<int> row2{4,8,0};
    vector<int> row3{7,6,5};

    //Create custom puzzle
    if(puzzle_choice ==2){
        
        int input;
        
        cout << "\nEnter your puzzle, use a 0 to represent the blank\n";
        cout << "Enter spaces or tabs between numbers then hit enter\n";
        
        //Get first row
        cout << "Enter the first row:  ";
        for(int i = 0; i < 3; i++){
            cin>>input;
            row1.push_back(input);
        }
        
        
        //Get second row
        cout << "Enter the second row: ";
        for(int i = 0; i < 3; i++){
            cin>>input;
            row2.push_back(input);
        }
        
        //Get the third row
        cout << "Enter the third row:  ";
        for(int i = 0; i < 3; i++){
            cin>>input;
            row3.push_back(input);
        }
        
    }
    
    vector<vector<int>> puzzle;
    puzzle.push_back(row1);
    puzzle.push_back(row2);
    puzzle.push_back(row3);

    
//    //Print puzzle test
//    cout << "\t";
//    for(int i=0; i < row1.size(); i++){
//        cout << row1.at(i) << ' ';
//    }
//    cout << "\n\t";
//    for(int i=0; i < row2.size(); i++){
//        cout << row2.at(i) << ' ';
//    }
//    cout << "\n\t";
//    for(int i=0; i < row3.size(); i++){
//        cout << row3.at(i) << ' ';
//    }
    
    cout << "\nEnter your choice of algorithm: " << endl;
    cout << "\t1. Uniform Cost Search\n";
    cout << "\t2. A* with the Misplaced Tile heuristic\n";
    cout << "\t3. A* with the Manhattan distance heuristic\n";
    cin >> algorithm_choice;
    
    //Call the proper function for each algorithm
    
    //Uniform Cost Search
    if(algorithm_choice == 1){
        uniform_cost_search();
    }
    
    //A* with the Misplaced Tile heuristic
    else if(algorithm_choice == 2){
        misplaced_tile();
    }
    
    //A* with the Manhattan distance heuristic
    else if(algorithm_choice == 3){
        manhattan_distance();
    }
    
//    cout << "Calling print_expand\n";
//    print_expand(1,2,row1,row2,row3);
    
    //Done
    cout << "Goal!!!\n";
    //Output statistics
    
    return 0;
}
