// PLAGUE SIMULATOR
    // Make that virus spread from one person to another using factors (age, history, randomness, etc.)
    // Make a way to track and display that spread.

#include <iostream>
#include <string>
#include <vector>

class Human {
    public:
        Human(int id, int health, int age, bool bad_history) {
            id_ = id;
            health_ = health;
            age_ = age;
            bad_history_ = bad_history;
        }
        
    private:
        int id_; // Object id.
        int health_; // 100 is best health, 0 is dead.
        int age_;
        bool bad_history_; // Referring to if they have a history of diseases.
};

class Population {
    public:
        void AddHuman(Human& human) {
            population.push_back(human);
        }
        
        int size() { return population.size(); }
  
    private:
        std::vector<Human> population;
};

class Virus {
    public:
        Virus(std::string name, int power, int above_age, bool favors_bad_history) {
            name_ = name;
            power_ = power;
            above_age_ = above_age;
            favors_bad_history_ = favors_bad_history;
        }    
    
    private:
        std::string name_;
        int power_; // 0 is the weakest, 100 is the strongest.
        int above_age_; // Those above this age will be more prone to the virus.
        bool favors_bad_history_; // If true, those with poor health history will be more prone to the virus.
};

int main()
{
    Population population;
    
    // Humans 0-999 with 100 health, age 5, and no bad history.
    for (int i = 0; i < 1000; ++i) {
        Human human(i, 100, 5, false);
        population.AddHuman(human);
    }
    
    // Humans 1000-1999 with 100 health, age 18, and no bad history.
    for (int i = 1000; i < 2000; ++i) {
        Human human(i, 100, 18, false);
        population.AddHuman(human);
    }
    
    // Humans 2000-2999 with 80 health, age 40, and no bad history.
    for (int i = 2000; i < 3000; ++i) {
        Human human(i, 100, 18, false);
        population.AddHuman(human);
    }
    
    // Humans 3000-3999 with 50 health, age 18, and bad history.
    for (int i = 3000; i < 4000; ++i) {
        Human human(i, 50, 80, true);
        population.AddHuman(human);
    }

    std::cout << "PLAGUE SIMULATOR\n";
    std::cout << "Current Population: ";
    std::cout << population.size() << '\n';
    
    std::string virus_name;
    
    std::cout << "What is the "

    return 0;
}
