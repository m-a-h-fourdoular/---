// شاركني طبخك.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <vector>



using namespace std;

class my_cook
{
private:
    string entering_password = "772w 6 3ll%wb + bn";
    struct I_creat_it1
    {
        bool is_it_found_1 = 1;
        string name_of_cook = "Fried Eggs";
        int num_of_steps = 6;
        string the_steps[6] = {
            "Place a clean frying pan on medium heat and allow it to warm slowly",
            "Add a small amount of cooking oil and spread it evenly in the pan",
            "Crack the eggs carefully into a separate bowl to avoid shells",
            "Gently pour the eggs from the bowl into the heated pan",
            "Season the eggs lightly with salt according to personal taste",
            "Cook until the egg whites are firm and the yolks reach desired texture"
        };
        string time_to_redy = "15m";
        string nutes_abut_the_cook = "Simple breakfast meal that is quick to prepare";
    };
    struct I_creat_it2
    {
        bool is_it_found_2 = 1;
        string name_of_cook = "White Rice";
        int num_of_steps = 9;
        string the_steps[9] = {
            "Rinse the rice several times using clean water until clear",
            "Soak the rice in water for about ten minutes for better texture",
            "Pour fresh water into a cooking pot and place it on the stove",
            "Add an appropriate amount of salt to enhance the flavor",
            "Carefully add the soaked rice into the boiling water",
            "Allow the rice to boil while uncovered for a short time",
            "Reduce the heat to low once most water is absorbed",
            "Cover the pot tightly to trap steam inside",
            "Leave the rice until fully cooked and fluffy"
        };
        string time_to_redy = "1h";
        string nutes_abut_the_cook = "Basic dish that can be served with many meals";
    };
    struct I_creat_it3
    {
        bool is_it_found_3 = 1;
        string name_of_cook = "Chicken Kabsa";
        int num_of_steps = 12;
        string the_steps[12] = {
            "Wash the chicken thoroughly and cut it into suitable pieces",
            "Chop the onions finely to ensure even cooking",
            "Fry the onions in oil until they become golden brown",
            "Add minced garlic and stir until fragrant",
            "Add chopped tomatoes and cook until softened",
            "Mix in traditional spices and seasoning carefully",
            "Place the chicken pieces into the pot",
            "Stir the chicken well to coat it with the sauce",
            "Add enough water to cover the ingredients",
            "Let the mixture boil to blend all flavors",
            "Add washed rice evenly over the pot",
            "Cook on low heat until rice and chicken are done"
        };
        string time_to_redy = "1h";
        string nutes_abut_the_cook = "Traditional rice dish rich in flavor and spices";
    };
    struct I_creat_it4
    {
        bool is_it_found_4 = 1;
        string name_of_cook = "Tea";
        int num_of_steps = 7;
        string the_steps[7] = {
            "Fill a kettle with clean drinking water",
            "Heat the water until it reaches a full boil",
            "Place a tea bag or tea leaves into a cup",
            "Carefully pour the boiling water into the cup",
            "Add sugar or sweetener based on preference",
            "Stir gently to mix all ingredients together",
            "Serve the tea while it is still hot"
        };
        string time_to_redy = "20m";
        string nutes_abut_the_cook = "Warm relaxing drink suitable for any time";
    };
    struct I_creat_it5
    {
        bool is_it_found_5 = 1;
        string name_of_cook = "Pasta";
        int num_of_steps = 10;
        string the_steps[10] = {
            "Fill a pot with water and place it on high heat",
            "Add salt to the water once it starts boiling",
            "Put the pasta into the boiling water slowly",
            "Stir occasionally to prevent sticking",
            "Cook the pasta until it reaches the desired softness",
            "Drain the pasta using a strainer",
            "Return the pasta to the pot",
            "Add prepared sauce over the pasta",
            "Mix well to coat all pasta evenly",
            "Serve hot on a clean plate"
        };
        string time_to_redy = "30m";
        string nutes_abut_the_cook = "Popular meal that is easy and filling";
    };
    struct I_creat_it6
    {
        bool is_it_found_6 = 1;
        string name_of_cook = "Fresh Salad";
        int num_of_steps = 8;
        string the_steps[8] = {
            "Wash all vegetables thoroughly with clean water",
            "Cut tomatoes into medium sized pieces",
            "Slice cucumbers evenly for better texture",
            "Chop lettuce into bite sized portions",
            "Place all vegetables into a large bowl",
            "Add salt carefully to avoid over seasoning",
            "Pour lemon juice and olive oil over the salad",
            "Mix gently until all ingredients are combined"
        };
        string time_to_redy = "10m";
        string nutes_abut_the_cook = "Healthy side dish full of fresh ingredients";
    };
    struct a_new_cook_in_own
    {
        bool is_it_found_new_cook = 0;
        string name_of_cook = "";
        int num_of_steps = 0;
        string the_steps[100];
        string time_to_redy = "";
        string nutes_abut_the_cook = "";
    };

public:
    I_creat_it1 i_c_1;
    I_creat_it2 i_c_2;
    I_creat_it3 i_c_3;
    I_creat_it4 i_c_4;
    I_creat_it5 i_c_5;
    I_creat_it6 i_c_6;
    bool is_cook_found = 0;
    a_new_cook_in_own* new_cook = new a_new_cook_in_own[100];
    int how_many_new_cook_in_main = 0;
    void my_cook_show_main_name_of_cook_1() const
    {
        cout << "| " << i_c_1.name_of_cook << " |";
    }
    void my_cook_show_main_name_of_cook_2() const
    {
        cout << "| " << i_c_2.name_of_cook << " |";
    }
    void my_cook_show_main_name_of_cook_3() const
    {
        cout << "| " << i_c_3.name_of_cook << " |";
    }
    void my_cook_show_main_name_of_cook_4() const
    {
        cout << "| " << i_c_4.name_of_cook << " |";
    }
    void my_cook_show_main_name_of_cook_5() const
    {
        cout << "| " << i_c_5.name_of_cook << " |";
    }
    void my_cook_show_main_name_of_cook_6() const
    {
        cout << "| " << i_c_6.name_of_cook << " |";
    }
    void my_cook_show_main_name_of_my_cook(string shape_of_show, string line_or_star)const
    {
        /*
        if(    )
        {

        }
        else{      }
        */
        if (shape_of_show == "le" || shape_of_show == "Le")
        {
            if (i_c_1.is_it_found_1)
            {
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   " << "--------------";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   " << "**************";

            }
            else { cout << "                  "; }
            if (i_c_2.is_it_found_2)
            {
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "                    " << "--------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "                    " << "**************\n";

            }
            else { cout << "\n"; }
            if (i_c_1.is_it_found_1)
            {
                cout << "   "; my_cook_show_main_name_of_cook_1();
            }
            else { cout << "                  "; }
            if (i_c_2.is_it_found_2)
            {
                cout << "                    "; my_cook_show_main_name_of_cook_2(); cout << "\n";
            }
            else { cout << "\n"; }
            if (i_c_1.is_it_found_1)
            {
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   " << "--------------";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   " << "**************";
            }
            else { cout << "                  "; }
            if (i_c_2.is_it_found_2)
            {
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "                    " << "--------------\n\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "                    " << "**************\n\n";
            }
            else { cout << "\n\n"; }

            //----------------------------------------------------
            if (i_c_3.is_it_found_3)
            {
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   " << "-----------------";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   " << "*****************";
            }
            else { cout << "                  "; }
            if (i_c_4.is_it_found_4)
            {
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "                    " << "-------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "                    " << "*******\n";
            }
            else { cout << "\n"; }
            if (i_c_3.is_it_found_3)
            {
                cout << "   "; my_cook_show_main_name_of_cook_3();
            }
            else { cout << "                  "; }
            if (i_c_4.is_it_found_4)
            {
                cout << "                    "; my_cook_show_main_name_of_cook_4(); cout << "\n";
            }
            else { cout << "\n"; }
            if (i_c_3.is_it_found_3)
            {
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   " << "-----------------";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   " << "*****************";
            }
            else { cout << "                  "; }
            if (i_c_4.is_it_found_4)
            {
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "                    " << "-------\n\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "                    " << "*******\n\n";
            }
            else { cout << "\n\n"; }
            //----------------------------------------------------
            if (i_c_5.is_it_found_5)
            {
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   " << "---------";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   " << "*********";
            }
            else { cout << "             "; }
            if (i_c_6.is_it_found_6)
            {
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "                         " << "---------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "                         " << "***************\n";
            }
            else { cout << "\n"; }
            if (i_c_5.is_it_found_5)
            {
                cout << "   "; my_cook_show_main_name_of_cook_5();
            }
            else { cout << "             "; }
            if (i_c_6.is_it_found_6)
            {
                cout << "                         "; my_cook_show_main_name_of_cook_6(); cout << "\n";
            }
            else { cout << "\n"; }
            if (i_c_5.is_it_found_5)
            {
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   " << "---------";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   " << "*********";
            }
            else { cout << "             "; }
            if (i_c_6.is_it_found_6)
            {
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "                         " << "---------------\n\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "                         " << "***************\n\n";
            }
            else { cout << "\n\n"; }
            if (how_many_new_cook_in_main > 0)
            {
                cout << "Recently added:\n";
                cout << "---------------\n";
                for (int i = 0; i < how_many_new_cook_in_main + 1; i++)
                {
                    if (new_cook[i].is_it_found_new_cook)
                    {
                        cout << "\n";

                        for (int q = 0; q < (new_cook[i].name_of_cook.size() + 4); q++)
                        {
                            if (line_or_star == "li" || line_or_star == "Li")
                                cout << "-";
                            if (line_or_star == "st" || line_or_star == "St")
                                cout << "*";
                        }
                        cout << "\n| " << new_cook[i].name_of_cook << " |\n";
                        for (int q = 0; q < (new_cook[i].name_of_cook.size() + 4); q++)
                        {
                            if (line_or_star == "li" || line_or_star == "Li")
                                cout << "-";
                            if (line_or_star == "st" || line_or_star == "St")
                                cout << "*";
                        }
                        cout << "\n";

                    }
                }
            }
        }
        if (shape_of_show == "cr" || shape_of_show == "Cr")
        {
            if (i_c_1.is_it_found_1)
            {
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n   " << "--------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   " << "**************\n";
            }
            else { cout << "\n"; }

            if (i_c_1.is_it_found_1)
            {
                cout << "   "; my_cook_show_main_name_of_cook_1();
            }
            else { cout << "\n"; }
            if (i_c_1.is_it_found_1)
            {
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n   " << "--------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   " << "**************\n";
            }
            else { cout << "\n"; }
            if (i_c_2.is_it_found_2)
            {
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   " << "--------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   " << "**************\n";
            }
            else { cout << "\n"; }
            if (i_c_2.is_it_found_2)
            {
                cout << "   "; my_cook_show_main_name_of_cook_2();
            }
            else { cout << "\n"; }
            if (i_c_2.is_it_found_2)
            {
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n   " << "--------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   " << "**************\n";
            }
            else { cout << "\n"; }
            if (i_c_3.is_it_found_3)
            {
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   " << "-----------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   " << "*****************\n";
            }
            else { cout << "\n"; }
            if (i_c_3.is_it_found_3)
            {
                cout << "   "; my_cook_show_main_name_of_cook_3();
            }
            else { cout << "\n"; }

            if (i_c_3.is_it_found_3)
            {
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n   " << "-----------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   " << "*****************\n";
            }
            else { cout << "\n"; }
            if (i_c_4.is_it_found_4)
            {
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   " << "-------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   " << "*******\n";
            }
            else { cout << "\n"; }
            if (i_c_4.is_it_found_4)
            {
                cout << "   "; my_cook_show_main_name_of_cook_4();
            }
            else { cout << "\n"; }
            if (i_c_4.is_it_found_4)
            {
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n   " << "-------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   " << "*******\n";
            }
            else { cout << "\n"; }
            if (i_c_5.is_it_found_5)
            {
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   " << "---------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   " << "*********\n";
            }
            else { cout << "\n"; }
            if (i_c_5.is_it_found_5)
            {
                cout << "   "; my_cook_show_main_name_of_cook_5();
            }
            else { cout << "\n"; }
            if (i_c_5.is_it_found_5)
            {
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n   " << "---------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   " << "*********\n";
            }
            else { cout << "\n"; }
            if (i_c_6.is_it_found_6)
            {
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   " << "---------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   " << "***************\n";
            }
            else { cout << "\n"; }
            if (i_c_6.is_it_found_6)
            {
                cout << "   "; my_cook_show_main_name_of_cook_6();
            }
            else { cout << "\n"; }
            if (i_c_6.is_it_found_6)
            {
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n   " << "---------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   " << "***************\n";
            }
            else { cout << "\n"; }
            if (how_many_new_cook_in_main > 0)
            {
                cout << "Recently added:\n";
                cout << "---------------\n";
                for (int i = 0; i < how_many_new_cook_in_main + 1; i++)
                {
                    if (new_cook[i].is_it_found_new_cook)
                    {
                        cout << "\n";
                        for (int q = 0; q < (new_cook[i].name_of_cook.size() + 4); q++)
                        {
                            if (line_or_star == "li" || line_or_star == "Li")
                                cout << "-";
                            if (line_or_star == "st" || line_or_star == "St")
                                cout << "*";
                        }
                        cout << "\n| " << new_cook[i].name_of_cook << " |\n";
                        for (int q = 0; q < (new_cook[i].name_of_cook.size() + 4); q++)
                        {
                            if (line_or_star == "li" || line_or_star == "Li")
                                cout << "-";
                            if (line_or_star == "st" || line_or_star == "St")
                                cout << "*";
                        }
                        cout << "\n";

                    }
                }
            }
        }
        /*  cout << setw(4) << "--------------" << setw(20) << "--------------\n";
          cout << setw(4); my_cook_show_main_name_of_cook_1(); cout << setw(20); my_cook_show_main_name_of_cook_2();
          cout << setw(4) << "--------------" << setw(20) << "--------------\n\n";

          cout << setw(4) << "----------------" << setw(20) << "-------\n";
          cout << setw(4); my_cook_show_main_name_of_cook_3(); cout << setw(20); my_cook_show_main_name_of_cook_4();
          cout << setw(4) << "----------------" << setw(20) << "-------\n\n";

          cout << setw(4) << "--------" << setw(20) << "---------------\n";
          cout << setw(4); my_cook_show_main_name_of_cook_5(); cout << setw(20); my_cook_show_main_name_of_cook_6();
          cout << setw(4) << "--------" << setw(20) << "---------------\n\n";*/
    }
    void if_acount_new_show_new_cooks(string shape_of_show, string line_or_star)const
    {
        if (shape_of_show == "le" || shape_of_show == "Le")
        {
            if (how_many_new_cook_in_main > 0)
            {
                cout << "Recently added:\n";
                cout << "---------------\n";
                for (int i = 0; i < how_many_new_cook_in_main + 1; i++)
                {
                    if (new_cook[i].is_it_found_new_cook)
                    {
                        cout << "\n";

                        for (int q = 0; q < (new_cook[i].name_of_cook.size() + 4); q++)
                        {
                            if (line_or_star == "li" || line_or_star == "Li")
                                cout << "-";
                            if (line_or_star == "st" || line_or_star == "St")
                                cout << "*";
                        }
                        cout << "\n| " << new_cook[i].name_of_cook << " |\n";
                        for (int q = 0; q < (new_cook[i].name_of_cook.size() + 4); q++)
                        {
                            if (line_or_star == "li" || line_or_star == "Li")
                                cout << "-";
                            if (line_or_star == "st" || line_or_star == "St")
                                cout << "*";
                        }
                        cout << "\n";
                    }
                }
            }
            if (shape_of_show == "cr" || shape_of_show == "Cr")
            {
                if (how_many_new_cook_in_main > 0)
                {
                    cout << "Recently added:\n";
                    cout << "---------------\n";
                    for (int i = 0; i < how_many_new_cook_in_main; i++)
                    {
                        if (new_cook[i].is_it_found_new_cook)
                        {
                            if (line_or_star == "li" || line_or_star == "Li")
                                cout << "------------\n";
                            if (line_or_star == "st" || line_or_star == "St")
                                cout << "************\n";
                            cout << "| " << new_cook[i].name_of_cook << " |";
                            if (line_or_star == "li" || line_or_star == "Li")
                                cout << "\n------------\n";
                            if (line_or_star == "st" || line_or_star == "St")
                                cout << "\n************\n";

                        }
                    }
                }
            }
        }
    }
    void display_my_cook_own_part_1() const
    {
        cout << "cook name: " << i_c_1.name_of_cook << ".\nthe time [" << i_c_1.time_to_redy << "].\nhow manysteps [" << i_c_1.num_of_steps << "].\nTHE STEPS:\n";
        for (int i = 0; i < i_c_1.num_of_steps; i++)
        {
            cout << i + 1 << " - " << i_c_1.the_steps[i] << ".\n";
        }
        cout << "nots: " << i_c_1.nutes_abut_the_cook << ".\n";
    }
    void display_my_cook_own_part_2() const
    {
        cout << "cook name: " << i_c_2.name_of_cook << ".\nthe time [" << i_c_2.time_to_redy << "].\nhow manysteps [" << i_c_2.num_of_steps << "].\nTHE STEPS:\n";
        for (int i = 0; i < i_c_2.num_of_steps; i++)
        {
            cout << i + 1 << " - " << i_c_2.the_steps[i] << ".\n";
        }
        cout << "nots: " << i_c_2.nutes_abut_the_cook << ".\n";
    }
    void display_my_cook_own_part_3() const
    {
        cout << "cook name: " << i_c_3.name_of_cook << ".\nthe time [" << i_c_3.time_to_redy << "].\nhow manysteps [" << i_c_3.num_of_steps << "].\nTHE STEPS:\n";
        for (int i = 0; i < i_c_3.num_of_steps; i++)
        {
            cout << i + 1 << " - " << i_c_3.the_steps[i] << ".\n";
        }
        cout << "nots: " << i_c_3.nutes_abut_the_cook << ".\n";
    }
    void display_my_cook_own_part_4() const
    {
        cout << "cook name: " << i_c_4.name_of_cook << ".\nthe time [" << i_c_4.time_to_redy << "].\nhow manysteps [" << i_c_4.num_of_steps << "].\nTHE STEPS:\n";
        for (int i = 0; i < i_c_4.num_of_steps; i++)
        {
            cout << i + 1 << " - " << i_c_4.the_steps[i] << ".\n";
        }
        cout << "nots: " << i_c_4.nutes_abut_the_cook << ".\n";
    }
    void display_my_cook_own_part_5() const
    {
        cout << "cook name: " << i_c_5.name_of_cook << ".\nthe time [" << i_c_5.time_to_redy << "].\nhow manysteps [" << i_c_5.num_of_steps << "].\nTHE STEPS:\n";
        for (int i = 0; i < i_c_5.num_of_steps; i++)
        {
            cout << i + 1 << " - " << i_c_5.the_steps[i] << ".\n";
        }
        cout << "nots: " << i_c_5.nutes_abut_the_cook << ".\n";
    }
    void display_my_cook_own_part_6() const
    {
        cout << "cook name: " << i_c_6.name_of_cook << ".\nthe time [" << i_c_6.time_to_redy << "].\nhow manysteps [" << i_c_6.num_of_steps << "].\nTHE STEPS:\n";
        for (int i = 0; i < i_c_6.num_of_steps; i++)
        {
            cout << i + 1 << " - " << i_c_6.the_steps[i] << ".\n";
        }
        cout << "nots: " << i_c_6.nutes_abut_the_cook << ".\n";
    }

    int if_cook_found_return(string is_it_found)
    {
        is_cook_found = 0;
        for (int i = 0; i < 100; i++)
        {
            if (is_it_found == new_cook[i].name_of_cook)
                return  is_cook_found = 1;
        }
        return 0;
    }
    void is_it_true_or_not()const
    {
        if (is_cook_found == 0)
            cout << "unknow code...\n";
    }

    void didsplay_the_new_cook_in_main(string name_of_cook) const
    {

        for (int q = 0; q < 100; q++)
        {
            if (name_of_cook == new_cook[q].name_of_cook && new_cook[q].is_it_found_new_cook)
            {
                cout << "cook name: " << new_cook[q].name_of_cook << ".\nthe time [" << new_cook[q].time_to_redy << "].\nhow manysteps [" << new_cook[q].num_of_steps << "].\nTHE STEPS:\n";
                for (int i = 0; i < new_cook[q].num_of_steps; i++)
                {
                    cout << i + 1 << " - " << new_cook[q].the_steps[i] << ".\n";
                }
                cout << "nots: " << new_cook[q].nutes_abut_the_cook << ".\n";
                break;
            }

        };
    }
    void display_a_new_cook_with_a_new_acount(string name_of_cook) const
    {
        for (int i = 0; i < 100; i++)
        {
            if (name_of_cook == new_cook[i].name_of_cook && new_cook[i].is_it_found_new_cook)
            {
                cout << "cook name: " << new_cook[i].name_of_cook << ".\nthe time [" << new_cook[i].time_to_redy << "].\nhow manysteps [" << new_cook[i].num_of_steps << "].\nTHE STEPS:\n";
                for (int q = 0; q < new_cook[i].num_of_steps; q++)
                {
                    cout << q + 1 << " - " << new_cook[i].the_steps[q] << ".\n";
                }
                cout << "nots: " << new_cook[i].nutes_abut_the_cook << ".\n";

                return;
            }
        }
    }

    int my_cook_delete_main_name_of_cook_1()
    {
        i_c_1.name_of_cook = "";

        return i_c_1.is_it_found_1 = 0;

    }
    int my_cook_delete_main_name_of_cook_2()
    {
        i_c_2.name_of_cook = "";

        return i_c_2.is_it_found_2 = 0;
    }
    int my_cook_delete_main_name_of_cook_3()
    {
        i_c_3.name_of_cook = "";

        return i_c_3.is_it_found_3 = 0;
    }
    int my_cook_delete_main_name_of_cook_4()
    {
        i_c_4.name_of_cook = "";

        return i_c_4.is_it_found_4 = 0;
    }
    int my_cook_delete_main_name_of_cook_5()
    {
        i_c_5.name_of_cook = "";

        return i_c_5.is_it_found_5 = 0;
    }
    int my_cook_delete_main_name_of_cook_6()
    {
        i_c_6.name_of_cook = "";

        return i_c_6.is_it_found_6 = 0;
    }
    int my_cook_delete_main_name_of_cook_new_cook(string name_of_cook)
    {
        for (int i = 0; i < 100; i++)
        {
            if (name_of_cook == new_cook[i].name_of_cook && new_cook[i].is_it_found_new_cook)
            {
                new_cook[i].name_of_cook = "";

                how_many_new_cook_in_main--;
                return new_cook[i].is_it_found_new_cook = 0;

            }
        }
        return 0;
    }

    void the_new_cook_in_main()
    {
        cout << "how many new cook you want to add in your own offline list ?\n";
        int new_cook_add_in_offline_list = 0;
        while (!(cin >> new_cook_add_in_offline_list))
        {

            cout << "wroing intery...only numper.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');


        }
        how_many_new_cook_in_main += new_cook_add_in_offline_list;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        for (int i = 0; i < new_cook_add_in_offline_list; i++)
        {
            cout << "\nCOOK NUM [" << i + 1 << "]:\n\n";
            new_cook[i].is_it_found_new_cook = 1;

            cout << "the cook name : ";
            getline(cin, new_cook[i].name_of_cook);
            while (new_cook[i].name_of_cook.empty())
            {
                cout << "name cannot be empty, enter again:\n";
                cout << "the cook name : ";
                getline(cin, new_cook[i].name_of_cook);
            }
            cout << "how many steps : ";
            int how_many_steps;
            while (!(cin >> how_many_steps))
            {

                cout << "wroing intery...only numper.\n";
                cout << "how many steps : ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

            }
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "write the steps :\n";

            new_cook[i].num_of_steps = how_many_steps;
            for (int q = 0; q < how_many_steps; q++)
            {
                cout << "step num: " << q + 1 << " - ";

                getline(cin, new_cook[i].the_steps[q]);
                while (new_cook[i].the_steps[q].empty())
                {
                    cout << "step num [" << q + 1 << "] is empty, enter again : \n";
                    getline(cin, new_cook[i].the_steps[q]);
                }
            }
            cout << "guss how long time want to become ready:\nhow many hours (only hours-numper) : ";
            int how_many_hours;
            while (!(cin >> how_many_hours))
            {

                cout << "wroing intery...only numper.\n";
                cout << "guss how long time want to become ready:\nhow many hours (only hours-numper) : ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

            }
            int how_many_minutes;
            cout << "how many minutes (only minutes) : ";
            while (!(cin >> how_many_minutes))
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "only number: ";
            }
            new_cook[i].time_to_redy = to_string(how_many_hours) + "h-" + to_string(how_many_minutes) + "m";
            cout << "any notes about {" << new_cook[i].name_of_cook << "},if you have not any nots enter (no) : ";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            getline(cin, new_cook[i].nutes_abut_the_cook);
            while (new_cook[i].nutes_abut_the_cook.empty())
            {
                cout << "nots can not be empty, enter again, if you have not any nots enter (no) : \n";
                getline(cin, new_cook[i].nutes_abut_the_cook);

            }
            cout << "_______________________________________\n";
        }

    }
    ~my_cook()

    {
        delete[] new_cook;
    }
};
class my_share_in_intrnet
{
private:
    //a_new_cook_in_internet* a_new_my_cook_in_internet;
    //int number_of_cooks;
    struct I_share_it1
    {
        bool is_it_found_1 = 1;
        string name_of_cook = "Grilled Chicken";
        int num_of_steps = 6;
        string the_steps[6] = {
            "Clean the chicken pieces thoroughly with water",
            "Marinate the chicken with spices and oil evenly",
            "Preheat the grill to medium temperature",
            "Place the chicken on the grill carefully",
            "Turn the chicken to cook all sides evenly",
            "Remove the chicken once fully cooked"
        };
        string time_to_redy = "45m";
        string nutes_abut_the_cook = "Shared recipe with smoky grilled flavor";
        string code_copyright = "87_486-hfj-[99456]";
        string evaluation_of_the_recipe = "|*| |*| |*| |*| |*| |*| |*| |*| |-| |-|  (8/10)";

        // أصحاب التعليقات
        vector<string> user_name_own_comment = {
            "Ahmed_92",
            "LinaCook",
            "Chef_Sami"
        };

        // التعليقات
        vector<string> comments = {
            "Very tasty! The flavor was amazing .",
            "I tried it with lemon, it was perfect .",
            "Good recipe but needs more spice ."
        };

        // عدد الإعجابات لكل تعليق
        vector<int> like_comment = { 12, 8, 5 };

        // عدد عدم الإعجاب
        vector<int> unlike_comment = { 1, 0, 2 };
    };


    struct I_share_it2
    {
        bool is_it_found_2 = 1;
        string name_of_cook = "Vegetable Soup";
        int num_of_steps = 6;
        string the_steps[6] = {
            "Wash all vegetables carefully",
            "Cut vegetables into small uniform pieces",
            "Heat water in a deep cooking pot",
            "Add vegetables gradually into the pot",
            "Season the soup with salt and spices",
            "Cook until vegetables become soft"
        };
        string time_to_redy = "30m";
        string nutes_abut_the_cook = "Warm and healthy shared soup recipe";
        string code_copyright = "86_539-meu-[63710]";
        string evaluation_of_the_recipe = "|*| |*| |*| |*| |*| |*| |*| |-| |-| |-| (7/10)";

        // أصحاب التعليقات
        vector<string> user_name_own_comment = {
            "HealthyLife",
            "MonaKitchen"
        };

        // التعليقات
        vector<string> comments = {
            "Perfect for winter nights .",
            "Simple and healthy, my kids loved it "
        };

        // عدد الإعجابات
        vector<int> like_comment = { 9, 6 };

        // عدد عدم الإعجاب
        vector<int> unlike_comment = { 0, 1 };
    };


    struct I_share_it3
    {
        bool is_it_found_3 = 1;
        string name_of_cook = "Fruit Dessert";
        int num_of_steps = 6;
        string the_steps[6] = {
            "Wash all fruits thoroughly",
            "Peel and cut fruits into small pieces",
            "Place fruits into a serving bowl",
            "Add a small amount of honey",
            "Mix gently to avoid crushing fruits",
            "Serve fresh and chilled"
        };
        string time_to_redy = "40m";
        string nutes_abut_the_cook = "Light dessert shared online";
        string code_copyright = "42_002-qts-[74834]";
        string evaluation_of_the_recipe = "|*| |*| |*| |*| |*| |*| |*| |*| |*| |-| (9/10)";

        // أصحاب التعليقات
        vector<string> user_name_own_comment = {
            "SweetTooth",
            "Nour_F",
            "DietMaster"
        };

        // التعليقات
        vector<string> comments = {
            "So refreshing and light .",
            "Perfect dessert for diet .",
            "Loved it with extra honey ."
        };

        // عدد الإعجابات
        vector<int> like_comment = { 15, 11, 7 };

        // عدد عدم الإعجاب
        vector<int> unlike_comment = { 0, 1, 0 };
    };

    struct a_new_cook_in_internet
    {
        bool is_it_found_new_cook = 0;
        string name_of_cook = "";
        int num_of_steps = 0;
        string the_steps[100];

        string time_to_redy = "";
        string nutes_abut_the_cook = "";
        string code_copyright = "";
        string evaluation_of_the_recipe = "NOT YET EVALUATED.";//تقييم الوصفه بالنجوم (من لم يتم تقييمة بعد الى عشر نجوم)ز

        // 👇 تم التحويل إلى vector فقط
        vector<string> user_name_own_comment; //عباره عن اسماء لاصحاب تلك التعليقات 
        vector<string> comments;              //تحمل تعليقات متنوعه عن تلك الطبخه وتفاعلات وملاحظات وحتى ايموجيز 
        vector<int> like_comment;              //عدد اللايكات على كل تعليق 
        vector<int> unlike_comment;            //عدد الدس لايكات على كل تعليق

    };

public:

    I_share_it1 i_s_1;
    I_share_it2 i_s_2;
    I_share_it3 i_s_3;
    /* int a_new_cook_i_share_it = 0;
     int a_new_comments_in_cook_i_share_it_1 = 0;
     int a_new_comments_in_cook_i_share_it_2 = 0;
     int a_new_comments_in_cook_i_share_it_3 = 0;
     int a_new_comments_in_cook_i_share_it_the_new_cook[100] ;*/
    vector <a_new_cook_in_internet> a_new_my_cook_in_internet;
    bool is_cook_found = 0;

    int a_new_cook_i_share_it = 0;

    void my_cook_show_share_name_of_cook_1() const
    {
        cout << "| " << i_s_1.name_of_cook << " |";
    }
    void my_cook_show_share_name_of_cook_2() const
    {
        cout << "| " << i_s_2.name_of_cook << " |";
    }
    void my_cook_show_share_name_of_cook_3() const
    {
        cout << "| " << i_s_3.name_of_cook << " |";
    }
    void my_cook_show_share_name_of_my_cook(string shape_of_show, string line_or_star)const
    {
        if (shape_of_show == "le" || shape_of_show == "Le")
        {
            if (i_s_1.is_it_found_1)
            {
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   " << "-------------------";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   " << "*******************";
            }
            else { cout << "                     "; }
            if (i_s_2.is_it_found_2)
            {
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "                    " << "------------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "                    " << "******************\n";
            }
            else { cout << "\n"; }
            if (i_s_1.is_it_found_1)
            {
                cout << "   "; my_cook_show_share_name_of_cook_1();
            }
            else { cout << "                    "; }
            if (i_s_2.is_it_found_2)
            {
                cout << "                    "; my_cook_show_share_name_of_cook_2(); cout << "\n";
            }
            else { cout << "\n"; }
            if (i_s_1.is_it_found_1)
            {
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   " << "-------------------";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   " << "*******************";
            }
            else { cout << "                  "; }
            if (i_s_2.is_it_found_2)
            {
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "                    " << "------------------\n\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "                    " << "******************\n\n";
            }
            else { cout << "\n\n"; }
            if (i_s_3.is_it_found_3)
            {
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   " << "-----------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   " << "*****************\n";
            }
            else { cout << "                  "; }
            if (i_s_3.is_it_found_3)
            {
                cout << "   "; my_cook_show_share_name_of_cook_3(); cout << "\n";
            }
            else { cout << "                  "; }
            if (i_s_3.is_it_found_3)
            {
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   " << "-----------------";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   " << "*****************";
            }
            else { cout << "                  "; }
            if (a_new_cook_i_share_it > 0)
            {
                cout << "\n\nRecently added:\n";
                cout << "---------------\n";
                for (int i = 0; i < a_new_cook_i_share_it + 1; i++)
                {
                    if (a_new_my_cook_in_internet[i].is_it_found_new_cook)
                    {
                        cout << "\n";
                        for (int q = 0; q < (a_new_my_cook_in_internet[i].name_of_cook.size() + 4); q++)
                        {
                            if (line_or_star == "li" || line_or_star == "Li")
                                cout << "-";
                            if (line_or_star == "st" || line_or_star == "St")
                                cout << "*";
                        }
                        cout << "\n";
                        cout << "| " << a_new_my_cook_in_internet[i].name_of_cook << " |";
                        cout << "\n";
                        for (int q = 0; q < (a_new_my_cook_in_internet[i].name_of_cook.size() + 4); q++)
                        {
                            if (line_or_star == "li" || line_or_star == "Li")
                                cout << "-";
                            if (line_or_star == "st" || line_or_star == "St")
                                cout << "*";
                        }
                        cout << "\n";
                    }
                }
            }
        }
        if (shape_of_show == "cr" || shape_of_show == "Cr")
        {
            if (i_s_1.is_it_found_1)
            {
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n   " << "-------------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   *******************\n";
                cout << "   "; my_cook_show_share_name_of_cook_1();
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n   " << "-------------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   *******************\n";

            }
            else { cout << "\n"; }
            if (i_s_2.is_it_found_2)
            {
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n   " << "------------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   ******************\n";
                cout << "   "; my_cook_show_share_name_of_cook_2(); cout << "\n";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   " << "------------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   ******************\n";
            }
            else { cout << "\n"; }
            if (i_s_3.is_it_found_3)
            {
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n   " << "-----------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   *****************\n";
                cout << "   "; my_cook_show_share_name_of_cook_3(); cout << "\n";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   " << "-----------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   *****************\n";
            }
            else { cout << "\n"; }
            if (a_new_cook_i_share_it > 0)
            {
                cout << "\n\nRecently added:\n";
                cout << "---------------\n";
                for (int i = 0; i < a_new_cook_i_share_it + 1; i++)
                {
                    if (a_new_my_cook_in_internet[i].is_it_found_new_cook)
                    {
                        cout << "\n";
                        for (int q = 0; q < (a_new_my_cook_in_internet[i].name_of_cook.size() + 4); q++)
                        {
                            if (line_or_star == "li" || line_or_star == "Li")
                                cout << "-";
                            if (line_or_star == "st" || line_or_star == "St")
                                cout << "*";
                        }
                        cout << "\n";
                        cout << "| " << a_new_my_cook_in_internet[i].name_of_cook << " |\n";
                        cout << "\n";
                        for (int q = 0; q < (a_new_my_cook_in_internet[i].name_of_cook.size() + 4); q++)
                        {
                            if (line_or_star == "li" || line_or_star == "Li")
                                cout << "-";
                            if (line_or_star == "st" || line_or_star == "St")
                                cout << "*";
                        }
                        cout << "\n";
                    }
                }
            }
        }
    }

    void my_cook_show_share_name_of_my_cook_a_new_account(string shape_of_show, string line_or_star) const
    {
        if (a_new_cook_i_share_it > 0)
        {
            cout << "\n\nRecently added:\n";
            cout << "---------------\n";
            for (int i = 0; i < a_new_cook_i_share_it + 1; i++)
            {
                if (a_new_my_cook_in_internet[i].is_it_found_new_cook)
                {

                    cout << "\n";
                    for (int q = 0; q < (a_new_my_cook_in_internet[i].name_of_cook.size() + 4); q++)
                    {
                        if (line_or_star == "li" || line_or_star == "Li")
                            cout << "-";
                        if (line_or_star == "st" || line_or_star == "St")
                            cout << "*";
                    }
                    cout << "\n";

                    cout << "| " << a_new_my_cook_in_internet[i].name_of_cook << " |";
                    cout << "\n";
                    for (int q = 0; q < (a_new_my_cook_in_internet[i].name_of_cook.size() + 4); q++)
                    {
                        if (line_or_star == "li" || line_or_star == "Li")
                            cout << "-";
                        if (line_or_star == "st" || line_or_star == "St")
                            cout << "*";
                    }
                    cout << "\n";
                }
            }
        }

    }
    void display_my_cook_online_part_1() const
    {
        cout << "cook name: " << i_s_1.name_of_cook << ".\nthe time [" << i_s_1.time_to_redy << "].\nhow manysteps [" << i_s_1.num_of_steps << "].\nTHE STEPS:\n";
        for (int i = 0; i < i_s_1.num_of_steps; i++)
        {
            cout << i + 1 << " - " << i_s_1.the_steps[i] << ".\n";
        }
        cout << "NOTE :" << i_s_1.nutes_abut_the_cook;
        cout << "\nRATINGs :" << i_s_1.evaluation_of_the_recipe << "\nCOPY RAIGHT PASSOWRD :" << i_s_1.code_copyright << "\n";

        cout << "comments numper :" << i_s_1.user_name_own_comment.size() << " \n";
        cout << "-------------------------------------\n";

    }
    void display_my_cook_online_part_2() const
    {
        cout << "cook name: " << i_s_2.name_of_cook << ".\nthe time [" << i_s_2.time_to_redy << "].\nhow manysteps [" << i_s_2.num_of_steps << "].\nTHE STEPS:\n";
        for (int i = 0; i < i_s_2.num_of_steps; i++)
        {
            cout << i + 1 << " - " << i_s_2.the_steps[i] << ".\n";
        }
        cout << "NOTE :" << i_s_2.nutes_abut_the_cook;

        cout << "\nRATINGs :" << i_s_2.evaluation_of_the_recipe << "\nCOPY RAIGHT PASSOWRD :" << i_s_2.code_copyright << "\n";
        cout << "comments numper :" << i_s_2.user_name_own_comment.size() << " \n";

        cout << "-------------------------------------\n";
    }
    void display_my_cook_online_part_3() const
    {
        cout << "cook name: " << i_s_3.name_of_cook << ".\nthe time [" << i_s_3.time_to_redy << "].\nhow manysteps [" << i_s_3.num_of_steps << "].\nTHE STEPS:\n";
        for (int i = 0; i < i_s_3.num_of_steps; i++)
        {
            cout << i + 1 << " - " << i_s_3.the_steps[i] << ".\n";
        }
        cout << "NOTE :" << i_s_3.nutes_abut_the_cook;
        cout << "\nRATINGs :" << i_s_3.evaluation_of_the_recipe << "\nCOPY RAIGHT PASSOWRD :" << i_s_3.code_copyright << "\n";

        cout << "comments numper :" << i_s_3.user_name_own_comment.size() << " \n";
        cout << "-------------------------------------\n";
    }

    void display_my_cook_online_new_acount_part_1() const
    {
        cout << "cook name: " << i_s_1.name_of_cook << ".\nthe time [" << i_s_1.time_to_redy << "].\nhow manysteps [" << i_s_1.num_of_steps << "].\nTHE STEPS:\n";
        for (int i = 0; i < i_s_1.num_of_steps; i++)
        {
            cout << i + 1 << " - " << i_s_1.the_steps[i] << ".\n";
        }
        cout << "NOTE :" << i_s_1.nutes_abut_the_cook;
        cout << "\nRATINGs :" << i_s_1.evaluation_of_the_recipe << "\n";
        cout << "comments numper :" << i_s_1.user_name_own_comment.size() << " \n";
        cout << "-------------------------------------\n";

    }
    void display_my_cook_online_new_acount_part_2() const
    {
        cout << "cook name: " << i_s_2.name_of_cook << ".\nthe time [" << i_s_2.time_to_redy << "].\nhow manysteps [" << i_s_2.num_of_steps << "].\nTHE STEPS:\n";
        for (int i = 0; i < i_s_2.num_of_steps; i++)
        {
            cout << i + 1 << " - " << i_s_2.the_steps[i] << ".\n";
        }
        cout << "NOTE :" << i_s_2.nutes_abut_the_cook;
        cout << "\nRATINGs :" << i_s_2.evaluation_of_the_recipe << "\n";
        cout << "comments numper :" << i_s_2.user_name_own_comment.size() << " \n";

        cout << "-------------------------------------\n";
    }
    void display_my_cook_online_new_acount_part_3() const
    {
        cout << "cook name: " << i_s_3.name_of_cook << ".\nthe time [" << i_s_3.time_to_redy << "].\nhow manysteps [" << i_s_3.num_of_steps << "].\nTHE STEPS:\n";
        for (int i = 0; i < i_s_3.num_of_steps; i++)
        {
            cout << i + 1 << " - " << i_s_3.the_steps[i] << ".\n";
        }
        cout << "NOTE :" << i_s_3.nutes_abut_the_cook;
        cout << "\nRATINGs :" << i_s_3.evaluation_of_the_recipe << "\n";
        cout << "comments numper :" << i_s_3.user_name_own_comment.size() << " \n";
        cout << "-------------------------------------\n";
    }

    void didsplay_the_new_cook_in_online(string name_of_cook) const
    {
        for (int q = 0; q < 100; q++)
        {
            if (name_of_cook == a_new_my_cook_in_internet[q].name_of_cook && a_new_my_cook_in_internet[q].is_it_found_new_cook)
            {


                cout << "cook name: " << a_new_my_cook_in_internet[q].name_of_cook << ".\nthe time [" << a_new_my_cook_in_internet[q].time_to_redy << "].\nevaluation: " << a_new_my_cook_in_internet[q].evaluation_of_the_recipe << "\nhow manysteps [" << a_new_my_cook_in_internet[q].num_of_steps << "].\nTHE STEPS:\n";
                for (int i = 0; i < a_new_my_cook_in_internet[q].num_of_steps; i++)
                {
                    cout << i + 1 << " - " << a_new_my_cook_in_internet[q].the_steps[i] << ".\n";
                }

                cout << "NOTE :" << a_new_my_cook_in_internet[q].nutes_abut_the_cook;

                cout << "\ncomments numper :" << a_new_my_cook_in_internet[q].user_name_own_comment.size() << " \n";
                cout << "RATINGs :" << a_new_my_cook_in_internet[q].evaluation_of_the_recipe << "\nCOPY RAIGHT PASSOWRD :" << a_new_my_cook_in_internet[q].code_copyright << "\n";
                cout << "-------------------------------------\n";
                break;
            }

        }
    }

    void display_comments_my_cook_online_part_1()const
    {
        for (size_t i = 0; i < i_s_1.user_name_own_comment.size(); i++)
        {
            cout << i_s_1.user_name_own_comment[i] << " :\n";
            cout << i_s_1.comments[i] << "\n";
            cout << "+ Likes: " << i_s_1.like_comment[i]
                << " | - Dislikes: " << i_s_1.unlike_comment[i] << "\n\n";
        }

    }
    void display_comments_my_cook_online_part_2()const
    {

        for (size_t i = 0; i < i_s_2.user_name_own_comment.size(); i++)
        {
            cout << i_s_2.user_name_own_comment[i] << " :\n";
            cout << i_s_2.comments[i] << "\n";
            cout << "+ Likes: " << i_s_2.like_comment[i] << "    | - Dislikes: " << i_s_2.unlike_comment[i] << "\n\n";

        }
    }
    void display_comments_my_cook_online_part_3()const
    {
        for (size_t i = 0; i < i_s_3.user_name_own_comment.size(); i++)
        {
            cout << i_s_3.user_name_own_comment[i] << " :\n";
            cout << i_s_3.comments[i] << "\n";
            cout << "+ Likes: " << i_s_3.like_comment[i] << "    | - Dislikes: " << i_s_3.unlike_comment[i] << "\n\n";

        }

    }
    void display_comments_my_cook_online_the_new_cook(string name_of_cook) const
    {
        int num_of_cook = 0;
        for (int i = 0; i < a_new_my_cook_in_internet.size(); i++)
        {
            if (name_of_cook == a_new_my_cook_in_internet[i].name_of_cook && a_new_my_cook_in_internet[i].is_it_found_new_cook)
                num_of_cook = i;
        }


        for (size_t i = 0;
            i < a_new_my_cook_in_internet[num_of_cook].user_name_own_comment.size();
            i++)
        {
            cout << a_new_my_cook_in_internet[num_of_cook].user_name_own_comment[i] << ":\n";
            cout << a_new_my_cook_in_internet[num_of_cook].comments[i] << "\n";
            cout << "+ Likes: "
                << a_new_my_cook_in_internet[num_of_cook].like_comment[i]
                << " | - Dislikes: "
                << a_new_my_cook_in_internet[num_of_cook].unlike_comment[i]
                << "\n\n";
        }

    }

    int my_cook_delete_share_name_of_cook_1()
    {
        i_s_1.name_of_cook = "";

        return i_s_1.is_it_found_1 = 0;
    }
    int my_cook_delete_share_name_of_cook_2()
    {
        i_s_2.name_of_cook = "";

        return i_s_2.is_it_found_2 = 0;
    }
    int my_cook_delete_share_name_of_cook_3()
    {
        i_s_3.name_of_cook = "";
        return i_s_3.is_it_found_3 = 0;
    }
    int my_cook_delete_share_name_of_cook_new_cook(string name_of_cook)
    {
        for (int i = 0; i < 100; i++)
        {
            if (name_of_cook == a_new_my_cook_in_internet[i].name_of_cook && a_new_my_cook_in_internet[i].is_it_found_new_cook)
            {
                a_new_my_cook_in_internet[i].name_of_cook = "";
                a_new_cook_i_share_it--;

                return a_new_my_cook_in_internet[i].is_it_found_new_cook = 0;
            }
        }
        return 0;
    }

    void add_new_comment_online_part_1(string your_user_name)
    {
        string comment;
        cout << "your name: " << your_user_name;

        while (true)
        {
            cout << "\nWrite your comment: \n  ";
            getline(cin, comment);
            i_s_1.user_name_own_comment.push_back(your_user_name);
            i_s_1.comments.push_back(comment);
            i_s_1.like_comment.push_back(0);
            i_s_1.unlike_comment.push_back(0);
            cout << "do you want to add another comments ?      [yes'no]\n";
            string yes_no;
            cin >> yes_no;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            while (!(yes_no == "yes" || yes_no == "Yes" || yes_no == "no" || yes_no == "No"))
            {
                cout << "unknow code..tray again\n";
                cout << "do you want to add another comments ?      [yes'no]\n";
                cin >> yes_no;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            if (yes_no == "no" || yes_no == "No")
                break;

        }

    }
    void add_new_comment_online_part_2(string your_user_name)
    {
        string comment;
        cout << "your name: " << your_user_name;

        while (true)
        {
            cout << "\nWrite your comment: \n  ";
            getline(cin, comment);
            i_s_2.user_name_own_comment.push_back(your_user_name);
            i_s_2.comments.push_back(comment);
            i_s_2.like_comment.push_back(0);
            i_s_2.unlike_comment.push_back(0);
            cout << "do you want to add another comments ?      [yes'no]\n";
            string yes_no;
            cin >> yes_no;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            while (!(yes_no == "yes" || yes_no == "Yes" || yes_no == "no" || yes_no == "No"))
            {
                cout << "unknow code..tray again\n";
                cout << "do you want to add another comments ?      [yes'no]\n";
                cin >> yes_no;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            if (yes_no == "no" || yes_no == "No")
                break;

        }

    }
    void add_new_comment_online_part_3(string your_user_name)
    {
        string comment;

        cout << "your name: " << your_user_name;

        while (true)
        {
            cout << "\nWrite your comment: \n  ";
            getline(cin, comment);
            i_s_3.user_name_own_comment.push_back(your_user_name);
            i_s_3.comments.push_back(comment);
            i_s_3.like_comment.push_back(0);
            i_s_3.unlike_comment.push_back(0);
            cout << "do you want to add another comments ?      [yes'no]\n";
            string yes_no;
            cin >> yes_no;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            while (!(yes_no == "yes" || yes_no == "Yes" || yes_no == "no" || yes_no == "No"))
            {
                cout << "unknow code..tray again\n";
                cout << "do you want to add another comments ?      [yes'no]\n";
                cin >> yes_no;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            if (yes_no == "no" || yes_no == "No")
                break;

        }

    }
    void add_new_comment_online_the_new_cook(string your_user_name)
    {
        int num_of_cook = 0;
        for (int i = 0; i < a_new_my_cook_in_internet.size(); i++)
        {
            if (your_user_name == a_new_my_cook_in_internet[i].name_of_cook && a_new_my_cook_in_internet[i].is_it_found_new_cook)
            {
                i = num_of_cook;
                break;
            }
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        while (true)
        {
            string comment;
            cout << "\nWrite your comment:\n  ";
            getline(cin, comment);

            a_new_my_cook_in_internet[num_of_cook].user_name_own_comment.push_back(your_user_name);
            a_new_my_cook_in_internet[num_of_cook].comments.push_back(comment);
            a_new_my_cook_in_internet[num_of_cook].like_comment.push_back(0);
            a_new_my_cook_in_internet[num_of_cook].unlike_comment.push_back(0);

            cout << "do you want to add another comment? [yes/no]\n";
            string yes_no;
            cin >> yes_no;

            while (yes_no != "yes" && yes_no != "Yes" &&
                yes_no != "no" && yes_no != "No")
            {
                cout << "unknown code, try again: ";
                cin >> yes_no;
            }

            if (yes_no == "no" || yes_no == "No")
                break;

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }


    int if_cook_found_return(string is_it_found)
    {
        is_cook_found = 0;

        for (int i = 0; i < a_new_my_cook_in_internet.size(); i++)
        {
            if (is_it_found == a_new_my_cook_in_internet[i].name_of_cook && a_new_my_cook_in_internet[i].is_it_found_new_cook)
                return  is_cook_found = 1;
        }
        return 0;
    }

    void the_new_cook_in_internet()
    {
        cout << "how many new cook you want to add?\n";
        int new_cook_add = 0;
        while (!(cin >> new_cook_add))
        {
            cout << "wrong entry... only numbers\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        a_new_cook_i_share_it += new_cook_add;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        for (int i = 0; i < new_cook_add; i++)
        {
            cout << "COOK NUM [" << i + 1 << "] :\n\n";
            a_new_my_cook_in_internet.push_back({});
            auto& cook = a_new_my_cook_in_internet.back();

            cook.is_it_found_new_cook = 1;
            cout << "cook name: ";
            getline(cin, cook.name_of_cook);
            while (cook.name_of_cook.empty())
            {
                cout << "name cannot be empty, enter again:\n";
                cout << "the cook name : ";
                getline(cin, cook.name_of_cook);
            }

            cout << "how many steps: ";
            while (!(cin >> cook.num_of_steps))
            {
                cout << "wroing intery...only numper.\n";
                cout << "how many steps : ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "write the steps :\n";

            for (int s = 0; s < cook.num_of_steps; s++)
            {
                cout << s + 1 << " - ";
                getline(cin, cook.the_steps[s]);
                while (cook.the_steps[s].empty())
                {
                    cout << "step num [" << s + 1 << "] is empty, enter again : \n";
                    getline(cin, cook.the_steps[s]);
                }
            }

            int hours;
            cout << "guss how long time want to become ready:\nhow many hours (only hours-numper) : ";
            while (!(cin >> hours))
            {

                cout << "wroing intery...only numper.\n";
                cout << "guss how long time want to become ready:\nhow many hours (only hours-numper) : ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

            }
            string minutes;
            cout << "how many minutes (only minutes) : ";
            while (!(cin >> minutes))
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "only number: ";
            }
            cook.time_to_redy = to_string(hours) + "h-" + minutes + "m";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "any notes (or no): ";
            getline(cin, cook.nutes_abut_the_cook);
            if (cook.nutes_abut_the_cook.empty())
                cook.nutes_abut_the_cook = "no";
            cout << "_______________________________________\n";

        }
    }


    void rate_of_views_last_week_evaluation_1()const
    {
        cout << "         |\n         |\n20 viows=|\n         | =\n10 viows=| =\n         | =\n         | =\n         --------------------\n          Grilled Chicken\n[15] VIOWS LAST WEEK.\nevaluation : " << i_s_1.evaluation_of_the_recipe << "\nthe secret character number : " << i_s_1.code_copyright;
    }
    void rate_of_views_last_week_evaluation_2()const
    {
        cout << "         |\n         |\n20 viows=| =\n         | =\n10 viows=| =\n         | =\n         | =\n         --------------------\n          Vegetable Soup\n[22] VIOWS LAST WEEK.\nevaluation : " << i_s_2.evaluation_of_the_recipe << "\nthe secret character number : " << i_s_2.code_copyright;;
    }
    void rate_of_views_last_week_evaluation_3()const
    {
        cout << "         |\n         |\n10 viows=|\n         | =\n         | =\n         --------------------\n          Fruit Dessert\n[9] VIOWS LAST WEEK.\nevaluation : " << i_s_3.evaluation_of_the_recipe << "\nthe secret character number : " << i_s_3.code_copyright;;
    }
    void rate_of_views_last_week_evaluation_the_new_cook(string your_user_name)const
    {
        int num_of_cook = 0;
        for (int i = 0; i < a_new_my_cook_in_internet.size(); i++)
        {
            if (your_user_name == a_new_my_cook_in_internet[i].name_of_cook && a_new_my_cook_in_internet[i].is_it_found_new_cook)
            {
                i = num_of_cook;
                break;
            }
        }
        cout << "         |\n         |\n10 viows=|\n         |the premium will appear when\n         |the first update.\n         --------------------\n          " << a_new_my_cook_in_internet[num_of_cook].name_of_cook << "\n[0] VIOWS LAST WEEK.\nevaluation : " << a_new_my_cook_in_internet[num_of_cook].evaluation_of_the_recipe << "\nthe secret character number : " << a_new_my_cook_in_internet[num_of_cook].code_copyright;;
    }

};
static void welcome()
{
    cout << "    ---------------------------------------------\n";
    cout << "    | WELCOME IN SHARE ME YOUR COOK APPLICATION |\n";
    cout << "    ---------------------------------------------\n\n";
}
class internet_cooker
{
private:
    class cooker_mohammed
    {
    private:
        struct mohammed_creat_it1
        {
            string name_of_cook = "Spiced Rice";
            int num_of_steps = 9;
            string the_steps[9] = {
                "Wash the rice until water becomes clear",
                "Soak the rice briefly for better cooking",
                "Heat oil in a cooking pot",
                "Add spices and stir until fragrant",
                "Add water carefully to the pot",
                "Bring the water to a boil",
                "Add the soaked rice",
                "Lower the heat and cover the pot",
                "Cook until rice is fully done"
            };
            string time_to_redy = "35m";
            string nutes_abut_the_cook = "Rice cooked with rich spices";

            // تقييم الوصفة
            string evaluation_of_the_recipe = "|*| |*| |*| |*| |*| |*| |*| |*| |-| |-| (8/10)";

            // أسماء أصحاب التعليقات
            vector<string> user_name_own_comment = {
                "Ahmed_Y",
                "SaraCook",
                "ChefAli"
            };

            // التعليقات
            vector<string> comments = {
                "The spices balance is perfect ",
                "Very easy steps and great taste ",
                "I added raisins and it was amazing!"
            };

            // عدد اللايكات
            vector<int> like_comment = { 14, 9, 6 };

            // عدد الدس لايكات
            vector<int> unlike_comment = { 1, 0, 2 };
        };

        struct mohammed_creat_it2
        {
            string name_of_cook = "Sandwich";
            int num_of_steps = 4;
            string the_steps[4] = {
                "Prepare fresh bread slices",
                "Add filling ingredients evenly",
                "Close the sandwich carefully",
                "Serve immediately"
            };
            string time_to_redy = "5m";
            string nutes_abut_the_cook = "Quick and easy meal";

            string evaluation_of_the_recipe = "|*| |*| |*| |*| |*| |*| |*| |-| |-| |-| (7/10)";

            vector<string> user_name_own_comment = {
                "QuickBite",
                "Lina"
            };

            vector<string> comments = {
                "Perfect for a fast lunch .",
                "Simple but tasty!"
            };

            vector<int> like_comment = { 7, 4 };
            vector<int> unlike_comment = { 0, 1 };
        };

        struct mohammed_creat_it3
        {
            string name_of_cook = "Meat Stew";
            int num_of_steps = 12;
            string the_steps[12] = {
                "Wash the meat thoroughly",
                "Cut meat into medium cubes",
                "Heat oil in a deep pot",
                "Add onions and cook until soft",
                "Add meat to the pot",
                "Stir meat until browned",
                "Add spices and seasoning",
                "Pour water into the pot",
                "Let the stew boil gently",
                "Reduce heat and cover",
                "Cook until meat is tender",
                "Serve hot with rice"
            };
            string time_to_redy = "30m";
            string nutes_abut_the_cook = "Slow cooked meat with deep flavor";

            string evaluation_of_the_recipe = "|*| |*| |*| |*| |*| |*| |*| |*| |*| |-| (9/10)";

            vector<string> user_name_own_comment = {
                "Yousef88",
                "HomeChef"
            };

            vector<string> comments = {
                "Very rich flavor, loved it .",
                "Took longer but worth it!"
            };

            vector<int> like_comment = { 18, 11 };
            vector<int> unlike_comment = { 0, 1 };
        };

    public:
        mohammed_creat_it1 maohammed_1;
        mohammed_creat_it2 maohammed_2;
        mohammed_creat_it3 maohammed_3;


        void show_share_maohammed_1() const
        {
            cout << "| " << maohammed_1.name_of_cook << " |";
        }
        void show_share_maohammed_2() const
        {
            cout << "| " << maohammed_2.name_of_cook << " |";
        }
        void show_share_maohammed_3() const
        {
            cout << "| " << maohammed_3.name_of_cook << " |";
        }
        void show_share_mohammed_cook(string shape_of_show, string line_or_star)const
        {
            if (shape_of_show == "le" || shape_of_show == "Le")
            {

                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   " << "---------------";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   " << "***************";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "                    " << "------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "                    " << "************\n";
                cout << "   "; show_share_maohammed_1();
                cout << "                    "; show_share_maohammed_2(); cout << "\n";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   " << "---------------";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   " << "***************";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "                    " << "------------\n\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "                    " << "************\n\n";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   " << "-------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   " << "*************\n";
                cout << "   "; show_share_maohammed_3(); cout << "\n";

                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   " << "-------------";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   " << "*************";

            }
            if (shape_of_show == "cr" || shape_of_show == "Cr")
            {
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n   " << "---------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   ***************\n";
                cout << "   "; show_share_maohammed_1();
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n   ---------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   ***************\n";

                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n   " << "------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   ************\n";
                cout << "   "; show_share_maohammed_2(); cout << "\n";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   " << "------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   ************\n";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n   -------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   *************\n";
                cout << "   "; show_share_maohammed_3();
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n   " << "-------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   *************\n";
            }
        }

        void display_mohammed_part_1() const
        {
            cout << "cook name: " << maohammed_1.name_of_cook << ".\nthe time [" << maohammed_1.time_to_redy << "].\nhow manysteps [" << maohammed_1.num_of_steps << "].\nTHE STEPS:\n";
            for (int i = 0; i < maohammed_1.num_of_steps; i++)
            {
                cout << i + 1 << " - " << maohammed_1.the_steps[i] << ".\n";
            }
            cout << "NOTE :" << maohammed_1.nutes_abut_the_cook;

            cout << "\nRATINGs :" << maohammed_1.evaluation_of_the_recipe << "\n";

            cout << "comments numper :" << maohammed_1.user_name_own_comment.size() << " \n";
            cout << "-------------------------------------\n";
        }
        void display_mohammed_part_3() const
        {
            cout << "cook name: " << maohammed_3.name_of_cook << ".\nthe time [" << maohammed_3.time_to_redy << "].\nhow manysteps [" << maohammed_3.num_of_steps << "].\nTHE STEPS:\n";
            for (int i = 0; i < maohammed_3.num_of_steps; i++)
            {
                cout << i + 1 << " - " << maohammed_3.the_steps[i] << ".\n";
            }
            cout << "NOTE :" << maohammed_3.nutes_abut_the_cook;

            cout << "\nRATINGs :" << maohammed_3.evaluation_of_the_recipe << "\n";

            cout << "comments numper :" << maohammed_3.user_name_own_comment.size() << " \n";
            cout << "-------------------------------------\n";
        };
        void display_mohammed_part_2() const
        {
            cout << "cook name: " << maohammed_2.name_of_cook << ".\nthe time [" << maohammed_2.time_to_redy << "].\nhow manysteps [" << maohammed_2.num_of_steps << "].\nTHE STEPS:\n";
            for (int i = 0; i < maohammed_2.num_of_steps; i++)
            {
                cout << i + 1 << " - " << maohammed_2.the_steps[i] << ".\n";
            }
            cout << "NOTE :" << maohammed_2.nutes_abut_the_cook;

            cout << "\nRATINGs :" << maohammed_2.evaluation_of_the_recipe << "\n";

            cout << "comments numper :" << maohammed_2.user_name_own_comment.size() << " \n";
            cout << "-------------------------------------\n";
        };

        void display_comments_mohammed_online_part_1()const
        {

            for (int i = 0; i < maohammed_1.user_name_own_comment.size(); i++)
            {
                cout << maohammed_1.user_name_own_comment[i] << endl;
                cout << maohammed_1.comments[i] << endl;
                cout << "+ Likes: " << maohammed_1.like_comment[i] << "    | - Dislikes: " << maohammed_1.unlike_comment[i] << "\n\n";

            }
        }
        void display_comments_mohammed_online_part_2()const
        {
            for (int i = 0; i < maohammed_2.user_name_own_comment.size(); i++)
            {
                cout << maohammed_2.user_name_own_comment[i] << endl;
                cout << maohammed_2.comments[i] << endl;
                cout << "+ Likes: " << maohammed_2.like_comment[i] << "    | - Dislikes: " << maohammed_2.unlike_comment[i] << "\n\n";
            }
        }
        void display_comments_mohammed_online_part_3()const
        {
            for (int i = 0; i < maohammed_3.user_name_own_comment.size(); i++)
            {
                cout << maohammed_3.user_name_own_comment[i] << endl;
                cout << maohammed_3.comments[i] << endl;
                cout << "+ Likes: " << maohammed_3.like_comment[i] << "    | - Dislikes: " << maohammed_3.unlike_comment[i] << "\n\n";

            }
        }
        void add_new_comment_online_maohammed_part_1(string your_user_name)
        {
            string comment;
            while (true)
            {
                cout << "\nWrite your comment: \n  ";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                getline(cin, comment);
                maohammed_1.user_name_own_comment.push_back(your_user_name);
                maohammed_1.comments.push_back(comment);
                maohammed_1.like_comment.push_back(0);
                maohammed_1.unlike_comment.push_back(0);
                cout << "do you want to add another comments ?      [yes'no]\n";
                string yes_no;
                cin >> yes_no;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                while (!(yes_no == "yes" || yes_no == "Yes" || yes_no == "no" || yes_no == "No"))
                {
                    cout << "unknow code..tray again\n";
                    cout << "do you want to add another comments ?      [yes'no]\n";
                    cin >> yes_no;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                }
                if (yes_no == "no" || yes_no == "No")
                    break;
            }
        }
        void add_new_comment_online_maohammed_part_2(string your_user_name)
        {
            string comment;
            while (true)
            {
                cout << "\nWrite your comment: \n  ";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                getline(cin, comment);
                maohammed_2.user_name_own_comment.push_back(your_user_name);
                maohammed_2.comments.push_back(comment);
                maohammed_2.like_comment.push_back(0);
                maohammed_2.unlike_comment.push_back(0);
                cout << "do you want to add another comments ?      [yes'no]\n";
                string yes_no;
                cin >> yes_no;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                while (!(yes_no == "yes" || yes_no == "Yes" || yes_no == "no" || yes_no == "No"))
                {
                    cout << "unknow code..tray again\n";
                    cout << "do you want to add another comments ?      [yes'no]\n";
                    cin >> yes_no;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                if (yes_no == "no" || yes_no == "No")
                    break;
            }
        }
        void add_new_comment_online_maohammed_part_3(string your_user_name)
        {
            string comment;
            while (true)
            {
                cout << "\nWrite your comment: \n  ";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                getline(cin, comment);
                maohammed_3.user_name_own_comment.push_back(your_user_name);
                maohammed_3.comments.push_back(comment);
                maohammed_3.like_comment.push_back(0);
                maohammed_3.unlike_comment.push_back(0);
                cout << "do you want to add another comments ?      [yes'no]\n";
                string yes_no;
                cin >> yes_no;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                while (!(yes_no == "yes" || yes_no == "Yes" || yes_no == "no" || yes_no == "No"))
                {
                    cout << "unknow code..tray again\n";
                    cout << "do you want to add another comments ?      [yes'no]\n";
                    cin >> yes_no;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                if (yes_no == "no" || yes_no == "No")
                    break;
            }
        }

    };

    class cooker_mauadah
    {
    private:
        struct mauadah_creat_it1
        {
            string name_of_cook = "Chicken Pasta";
            int num_of_steps = 6;
            string the_steps[6] = {
                "Boil pasta until soft",
                "Season chicken pieces",
                "Cook chicken in pan",
                "Add sauce to chicken",
                "Mix pasta with sauce",
                "Serve hot"
            };
            string time_to_redy = "25m";
            string nutes_abut_the_cook = "Creamy pasta with chicken";

            string evaluation_of_the_recipe = "|*| |*| |*| |*| |*| |*| |-| |-| |-| |-| (6/10)";

            vector<string> user_name_own_comment = {
                "FoodLover",
                "Maha"
            };

            vector<string> comments = {
                "Very creamy and delicious .",
                "Kids loved it!"
            };

            vector<int> like_comment = { 12, 8 };
            vector<int> unlike_comment = { 0, 1 };
        };

        struct mauadah_creat_it2
        {
            string name_of_cook = "Baked Cake";
            int num_of_steps = 16;
            string the_steps[16] = {
                "Preheat the oven properly",
                "Prepare baking pan with butter",
                "Mix flour and dry ingredients",
                "Mix eggs and sugar well",
                "Add butter to the mixture",
                "Combine wet and dry ingredients",
                "Mix until smooth texture",
                "Pour mixture into pan",
                "Tap pan gently to remove air",
                "Place pan in the oven",
                "Bake at correct temperature",
                "Check doneness with toothpick",
                "Remove cake from oven",
                "Let cake cool slightly",
                "Remove from pan carefully",
                "Serve and enjoy"
            };
            string time_to_redy = "30m";
            string nutes_abut_the_cook = "Soft homemade baked cake";

            string evaluation_of_the_recipe = "|*| |*| |*| |*| |*| |*| |*| |*| |*| |-| (9/10)";

            vector<string> user_name_own_comment = {
                "Sara",
                "Omar",
                "Lina"
            };

            vector<string> comments = {
                "The cake was very soft .",
                "Clear steps and great taste",
                "Perfect with tea "
            };

            vector<int> like_comment = { 15, 9, 6 };
            vector<int> unlike_comment = { 0, 1, 0 };
        };

        struct mauadah_creat_it3
        {
            string name_of_cook = "Hot Chocolate";
            int num_of_steps = 8;
            string the_steps[8] = {
                "Heat milk slowly in a pot",
                "Add cocoa powder",
                "Stir until fully dissolved",
                "Add sugar as preferred",
                "Continue heating gently",
                "Do not allow boiling",
                "Pour into a cup",
                "Serve warm"
            };
            string time_to_redy = "10m";
            string nutes_abut_the_cook = "Warm sweet drink";

            string evaluation_of_the_recipe = "|*| |*| |*| |*| |*| |-| |-| |-| |-| |-| (5/10)";

            vector<string> user_name_own_comment = {
                "Ahmad",
                "Noor"
            };

            vector<string> comments = {
                "Very comforting on cold nights ",
                "Not too sweet, perfect!"
            };

            vector<int> like_comment = { 8, 5 };
            vector<int> unlike_comment = { 0, 0 };
        };

    public:
        mauadah_creat_it1 mauadah_1;
        mauadah_creat_it2 mauadah_2;
        mauadah_creat_it3 mauadah_3;

        void show_share_mauadah_1() const
        {
            cout << "| " << mauadah_1.name_of_cook << " |";
        }
        void show_share_mauadah_2() const
        {
            cout << "| " << mauadah_2.name_of_cook << " |";
        }
        void show_share_mauadah_3() const
        {
            cout << "| " << mauadah_3.name_of_cook << " |";
        }
        void show_share_mauadah_cook(string shape_of_show, string line_or_star)const
        {
            if (shape_of_show == "le" || shape_of_show == "Le")
            {

                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   " << "-----------------";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   " << "*****************";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "                    " << "--------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "                    " << "**************\n";
                cout << "   "; show_share_mauadah_1();
                cout << "                    "; show_share_mauadah_2(); cout << "\n";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   " << "-----------------";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   " << "*****************";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "                    " << "--------------\n\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "                    " << "**************\n\n";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   " << "-----------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   " << "*****************\n";
                cout << "   "; show_share_mauadah_3(); cout << "\n";

                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   " << "-----------------";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   " << "*****************";

            }
            if (shape_of_show == "cr" || shape_of_show == "Cr")
            {

                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n   -----------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   *****************\n";
                cout << "   "; show_share_mauadah_1();
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n   -----------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   *****************\n";

                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n   --------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   **************\n";
                cout << "   "; show_share_mauadah_2(); cout << "\n";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   --------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   **************\n";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n   -----------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   *****************\n";
                cout << "   "; show_share_mauadah_3();
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n   -----------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   *****************\n";
            }
        }

        void display_mauadah_part_1() const
        {
            cout << "cook name: " << mauadah_1.name_of_cook << ".\nthe time [" << mauadah_1.time_to_redy << "].\nhow manysteps [" << mauadah_1.num_of_steps << "].\nTHE STEPS:\n";
            for (int i = 0; i < mauadah_1.num_of_steps; i++)
            {
                cout << i + 1 << " - " << mauadah_1.the_steps[i] << ".\n";
            }
            cout << "NOTE :" << mauadah_1.nutes_abut_the_cook;

            cout << "\nRATINGs :" << mauadah_1.evaluation_of_the_recipe << "\n";

            cout << "comments numper :" << mauadah_1.user_name_own_comment.size() << " \n";
            cout << "-------------------------------------\n";
        }
        void display_mauadah_part_2() const
        {
            cout << "cook name: " << mauadah_2.name_of_cook << ".\nthe time [" << mauadah_2.time_to_redy << "].\nhow manysteps [" << mauadah_2.num_of_steps << "].\nTHE STEPS:\n";
            for (int i = 0; i < mauadah_2.num_of_steps; i++)
            {
                cout << i + 1 << " - " << mauadah_2.the_steps[i] << ".\n";
            }
            cout << "NOTE :" << mauadah_2.nutes_abut_the_cook;

            cout << "\nRATINGs :" << mauadah_2.evaluation_of_the_recipe << "\n";

            cout << "comments numper :" << mauadah_2.user_name_own_comment.size() << " \n";
            cout << "-------------------------------------\n";
        };
        void display_mauadah_part_3() const
        {
            cout << "cook name: " << mauadah_3.name_of_cook << ".\nthe time [" << mauadah_3.time_to_redy << "].\nhow manysteps [" << mauadah_3.num_of_steps << "].\nTHE STEPS:\n";
            for (int i = 0; i < mauadah_3.num_of_steps; i++)
            {
                cout << i + 1 << " - " << mauadah_3.the_steps[i] << ".\n";
            }
            cout << "NOTE :" << mauadah_3.nutes_abut_the_cook;

            cout << "\nRATINGs :" << mauadah_3.evaluation_of_the_recipe << "\n";

            cout << "comments numper :" << mauadah_3.user_name_own_comment.size() << " \n";
            cout << "-------------------------------------\n";
        };

        void display_comments_mauadah_online_part_1()const
        {

            for (int i = 0; i < mauadah_1.user_name_own_comment.size(); i++)
            {
                cout << mauadah_1.user_name_own_comment[i] << endl;
                cout << mauadah_1.comments[i] << endl;
                cout << "+ Likes: " << mauadah_1.like_comment[i] << "    | - Dislikes: " << mauadah_1.unlike_comment[i] << "\n\n";

            }
        }
        void display_comments_mauadah_online_part_2()const
        {
            for (int i = 0; i < mauadah_2.user_name_own_comment.size(); i++)
            {
                cout << mauadah_2.user_name_own_comment[i] << endl;
                cout << mauadah_2.comments[i] << endl;
                cout << "+ Likes: " << mauadah_2.like_comment[i] << "    | - Dislikes: " << mauadah_2.unlike_comment[i] << "\n\n";
            }
        }
        void display_comments_mauadah_online_part_3()const
        {
            for (int i = 0; i < mauadah_3.user_name_own_comment.size(); i++)
            {
                cout << mauadah_3.user_name_own_comment[i] << endl;
                cout << mauadah_3.comments[i] << endl;
                cout << "+ Likes: " << mauadah_3.like_comment[i] << "    | - Dislikes: " << mauadah_3.unlike_comment[i] << "\n\n";

            }
        }

        void add_new_comment_mauadah_online_part_1(string your_user_name)
        {
            string comment;
            while (true)
            {
                cout << "\nWrite your comment: \n  ";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                getline(cin, comment);
                mauadah_1.user_name_own_comment.push_back(your_user_name);
                mauadah_1.comments.push_back(comment);
                mauadah_1.like_comment.push_back(0);
                mauadah_1.unlike_comment.push_back(0);
                cout << "do you want to add another comments ?      [yes'no]\n";
                string yes_no;
                cin >> yes_no;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                while (!(yes_no == "yes" || yes_no == "Yes" || yes_no == "no" || yes_no == "No"))
                {
                    cout << "unknow code..tray again\n";
                    cout << "do you want to add another comments ?      [yes'no]\n";
                    cin >> yes_no;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                if (yes_no == "no" || yes_no == "No")
                    break;
            }
        }
        void add_new_comment_mauadah_online_part_2(string your_user_name)
        {
            string comment;
            while (true)
            {
                cout << "\nWrite your comment: \n  ";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                getline(cin, comment);
                mauadah_2.user_name_own_comment.push_back(your_user_name);
                mauadah_2.comments.push_back(comment);
                mauadah_2.like_comment.push_back(0);
                mauadah_2.unlike_comment.push_back(0);
                cout << "do you want to add another comments ?      [yes'no]\n";
                string yes_no;
                cin >> yes_no;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                while (!(yes_no == "yes" || yes_no == "Yes" || yes_no == "no" || yes_no == "No"))
                {
                    cout << "unknow code..tray again\n";
                    cout << "do you want to add another comments ?      [yes'no]\n";
                    cin >> yes_no;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                if (yes_no == "no" || yes_no == "No")
                    break;
            }
        }
        void add_new_comment_mauadah_online_part_3(string your_user_name)
        {
            string comment;
            while (true)
            {
                cout << "\nWrite your comment: \n  ";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                getline(cin, comment);
                mauadah_3.user_name_own_comment.push_back(your_user_name);
                mauadah_3.comments.push_back(comment);
                mauadah_3.like_comment.push_back(0);
                mauadah_3.unlike_comment.push_back(0);
                cout << "do you want to add another comments ?      [yes'no]\n";
                string yes_no;
                cin >> yes_no;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                while (!(yes_no == "yes" || yes_no == "Yes" || yes_no == "no" || yes_no == "No"))
                {
                    cout << "unknow code..tray again\n";
                    cout << "do you want to add another comments ?      [yes'no]\n";
                    cin >> yes_no;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                if (yes_no == "no" || yes_no == "No")
                    break;
            }
        }

    };

    class cooker_king
    {
    private:
        struct king_creat_it1
        {
            string name_of_cook = "Omelette";
            int num_of_steps = 6;
            string the_steps[6] = {
                "Crack eggs into a bowl",
                "Whisk eggs gently",
                "Heat pan with oil",
                "Pour eggs into pan",
                "Cook until set",
                "Serve immediately"
            };
            string time_to_redy = "15m";
            string nutes_abut_the_cook = "Classic egg omelette";

            string evaluation_of_the_recipe = "|*| |*| |*| |*| |-| |-| |-| |-| |-| |-| (4/10)";

            vector<string> user_name_own_comment = {
                "Salem"
            };

            vector<string> comments = {
                "Quick and simple breakfast ."
            };

            vector<int> like_comment = { 6 };
            vector<int> unlike_comment = { 1 };
        };

        struct king_creat_it2
        {
            string name_of_cook = "Fried Potatoes";
            int num_of_steps = 9;
            string the_steps[9] = {
                "Wash potatoes thoroughly",
                "Peel potatoes carefully",
                "Cut into thin slices",
                "Heat oil in a pan",
                "Add potatoes slowly",
                "Stir occasionally",
                "Fry until golden",
                "Remove excess oil",
                "Serve hot"
            };
            string time_to_redy = "20m";
            string nutes_abut_the_cook = "Crispy fried potatoes";

            string evaluation_of_the_recipe = "|*| |*| |*| |*| |*| |*| |*| |-| |-| |-| (7/10)";

            vector<string> user_name_own_comment = {
                "Hassan",
                "Mona"
            };

            vector<string> comments = {
                "Very crispy .",
                "Needed less oil"
            };

            vector<int> like_comment = { 11, 7 };
            vector<int> unlike_comment = { 0, 2 };
        };

        struct king_creat_it3
        {
            string name_of_cook = "Roasted Chicken";
            int num_of_steps = 12;
            string the_steps[12] = {
                "Clean the whole chicken",
                "Season chicken with spices",
                "Preheat the oven",
                "Place chicken in baking tray",
                "Add vegetables around chicken",
                "Cover tray lightly",
                "Bake for initial period",
                "Remove cover",
                "Continue roasting",
                "Check internal temperature",
                "Remove from oven",
                "Rest before serving"
            };
            string time_to_redy = "30m";
            string nutes_abut_the_cook = "Oven roasted full chicken";
            string evaluation_of_the_recipe = "|*| |*| |*| |*| |*| |-| |-| |-| |-| |-| (5/10)";
            vector<string> user_name_own_comment = { "Mohammed Al-Haddad", "Aisha Al-Saleh" };
            vector<string> comments = {
                "Juicy and perfectly seasoned .",
                "Crispy outside, tender inside ."
            };
            vector<int> like_comment = { 15, 12 };
            vector<int> unlike_comment = { 1, 0 };
        };
    public:
        king_creat_it1 king_1;
        king_creat_it2 king_2;
        king_creat_it3 king_3;

        void show_share_king_1() const
        {
            cout << "| " << king_1.name_of_cook << " |";
        }
        void show_share_king_2() const
        {
            cout << "| " << king_2.name_of_cook << " |";
        }
        void show_share_king_3() const
        {
            cout << "| " << king_3.name_of_cook << " |";
        }
        void show_share_king_cook(string shape_of_show, string line_or_star)const
        {
            if (shape_of_show == "le" || shape_of_show == "Le")
            {

                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   " << "------------";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   " << "************";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "                    " << "------------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "                    " << "******************\n";
                cout << "   "; show_share_king_1();
                cout << "                    "; show_share_king_2(); cout << "\n";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   " << "------------";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   " << "************";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "                    " << "------------------\n\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "                    " << "******************\n\n";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   " << "-------------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   " << "*******************\n";
                cout << "   "; show_share_king_3(); cout << "\n";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   " << "-------------------";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   " << "*******************";

            }
            if (shape_of_show == "cr" || shape_of_show == "Cr")
            {
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n   ------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   ************\n";
                cout << "   "; show_share_king_1();
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n   ------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   ************\n";

                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n   ------------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   ******************\n";
                cout << "   "; show_share_king_2(); cout << "\n";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   ------------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   ******************\n";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n   -------------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   *******************\n";
                cout << "   "; show_share_king_3();
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n   -------------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   *******************\n";
            }
        }

        void display_comments_king_online_part_1()const
        {

            for (int i = 0; i < king_1.user_name_own_comment.size(); i++)
            {
                cout << king_1.user_name_own_comment[i] << endl;
                cout << king_1.comments[i] << endl;
                cout << "+ Likes: " << king_1.like_comment[i] << "    | - Dislikes: " << king_1.unlike_comment[i] << "\n\n";

            }
        }
        void display_comments_king_online_part_2()const
        {
            for (int i = 0; i < king_2.user_name_own_comment.size(); i++)
            {
                cout << king_2.user_name_own_comment[i] << endl;
                cout << king_2.comments[i] << endl;
                cout << "+ Likes: " << king_2.like_comment[i] << "    | - Dislikes: " << king_2.unlike_comment[i] << "\n\n";

            }
        }
        void display_comments_king_online_part_3()const
        {
            for (int i = 0; i < king_3.user_name_own_comment.size(); i++)
            {
                cout << king_3.user_name_own_comment[i] << endl;
                cout << king_3.comments[i] << endl;
                cout << "+ Likes: " << king_3.like_comment[i] << "    | - Dislikes: " << king_3.unlike_comment[i] << "\n\n";

            }
        }

        void display_king_part_1() const
        {
            cout << "cook name: " << king_1.name_of_cook << ".\nthe time [" << king_1.time_to_redy << "].\nhow manysteps [" << king_1.num_of_steps << "].\nTHE STEPS:\n";
            for (int i = 0; i < king_1.num_of_steps; i++)
            {
                cout << i + 1 << " - " << king_1.the_steps[i] << ".\n";
            }
            cout << "NOTE :" << king_1.nutes_abut_the_cook;

            cout << "\nRATINGs :" << king_1.evaluation_of_the_recipe << "\n";

            cout << "comments numper :" << king_1.user_name_own_comment.size() << " \n";
            cout << "-------------------------------------\n";
        }
        void display_king_part_2() const
        {
            cout << "cook name: " << king_2.name_of_cook << ".\nthe time [" << king_2.time_to_redy << "].\nhow manysteps [" << king_2.num_of_steps << "].\nTHE STEPS:\n";
            for (int i = 0; i < king_2.num_of_steps; i++)
            {
                cout << i + 1 << " - " << king_2.the_steps[i] << ".\n";
            }
            cout << "NOTE :" << king_2.nutes_abut_the_cook;

            cout << "\nRATINGs :" << king_2.evaluation_of_the_recipe << "\n";

            cout << "comments numper :" << king_2.user_name_own_comment.size() << " \n";
            cout << "-------------------------------------\n";
        };
        void display_king_part_3() const
        {
            cout << "cook name: " << king_3.name_of_cook << ".\nthe time [" << king_3.time_to_redy << "].\nhow manysteps [" << king_3.num_of_steps << "].\nTHE STEPS:\n";
            for (int i = 0; i < king_3.num_of_steps; i++)
            {
                cout << i + 1 << " - " << king_3.the_steps[i] << ".\n";
            }
            cout << "NOTE :" << king_3.nutes_abut_the_cook;

            cout << "\nRATINGs :" << king_3.evaluation_of_the_recipe << "\n";

            cout << "comments numper :" << king_3.user_name_own_comment.size() << " \n";
            cout << "-------------------------------------\n";
        };

        void add_new_comment_king_online_part_1(string your_user_name)
        {
            string comment;
            while (true)
            {
                cout << "\nWrite your comment: \n  ";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                getline(cin, comment);
                king_1.user_name_own_comment.push_back(your_user_name);
                king_1.comments.push_back(comment);
                king_1.like_comment.push_back(0);
                king_1.unlike_comment.push_back(0);
                cout << "do you want to add another comments ?      [yes'no]\n";
                string yes_no;
                cin >> yes_no;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                while (!(yes_no == "yes" || yes_no == "Yes" || yes_no == "no" || yes_no == "No"))
                {
                    cout << "unknow code..tray again\n";
                    cout << "do you want to add another comments ?      [yes'no]\n";
                    cin >> yes_no;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                if (yes_no == "no" || yes_no == "No")
                    break;
            }
        }
        void add_new_comment_king_online_part_2(string your_user_name)
        {
            string comment;
            while (true)
            {
                cout << "\nWrite your comment: \n  ";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                getline(cin, comment);
                king_2.user_name_own_comment.push_back(your_user_name);
                king_2.comments.push_back(comment);
                king_2.like_comment.push_back(0);
                king_2.unlike_comment.push_back(0);
                cout << "do you want to add another comments ?      [yes'no]\n";
                string yes_no;
                cin >> yes_no;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                while (!(yes_no == "yes" || yes_no == "Yes" || yes_no == "no" || yes_no == "No"))
                {
                    cout << "unknow code..tray again\n";
                    cout << "do you want to add another comments ?      [yes'no]\n";
                    cin >> yes_no;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                if (yes_no == "no" || yes_no == "No")
                    break;
            }
        }
        void add_new_comment_king_online_part_3(string your_user_name)
        {
            string comment;
            while (true)
            {
                cout << "\nWrite your comment: \n  ";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                getline(cin, comment);
                king_3.user_name_own_comment.push_back(your_user_name);
                king_3.comments.push_back(comment);
                king_3.like_comment.push_back(0);
                king_3.unlike_comment.push_back(0);
                cout << "do you want to add another comments ?      [yes'no]\n";
                string yes_no;
                cin >> yes_no;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                while (!(yes_no == "yes" || yes_no == "Yes" || yes_no == "no" || yes_no == "No"))
                {
                    cout << "unknow code..tray again\n";
                    cout << "do you want to add another comments ?      [yes'no]\n";
                    cin >> yes_no;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                if (yes_no == "no" || yes_no == "No")
                    break;
            }
        }

    };

    class cooker_nauras
    {
    private:
        struct nauras_creat_it1
        {
            string name_of_cook = "Boiled Eggs";
            int num_of_steps = 4;
            string the_steps[4] = {
                "Place eggs in a pot",
                "Cover eggs with water",
                "Boil for required time",
                "Remove and cool"
            };
            string time_to_redy = "10m";
            string nutes_abut_the_cook = "Simple boiled eggs";
            string evaluation_of_the_recipe = "|*| |*| |*| |*| |*| |*| |*| |*| |*| |*| (10/10)";
            vector<string> user_name_own_comment = { "Ali Mansour", "Sara Al-Amiri" };
            vector<string> comments = {
                "Eggs came out perfect every time .",
                "Simple and quick breakfast ."
            };
            vector<int> like_comment = { 10, 8 };
            vector<int> unlike_comment = { 0, 0 };
        };

        struct nauras_creat_it2
        {
            string name_of_cook = "Fruit Juice";
            int num_of_steps = 5;
            string the_steps[5] = {
                "Wash fruits carefully",
                "Cut fruits into pieces",
                "Place fruits in blender",
                "Blend until smooth",
                "Serve fresh"
            };
            string time_to_redy = "25m";
            string nutes_abut_the_cook = "Fresh natural juice";
            string evaluation_of_the_recipe = "|*| |*| |*| |*| |*| |*| |-| |-| |-| |-| (6/10)";
            vector<string> user_name_own_comment = { "Huda Al-Farsi", "Fahad Al-Khalili" };
            vector<string> comments = {
                "Refreshing and sweet .",
                "Kids loved it ."
            };
            vector<int> like_comment = { 20, 18 };
            vector<int> unlike_comment = { 0, 1 };
        };

        struct nauras_creat_it3
        {
            string name_of_cook = "Toast Bread";
            int num_of_steps = 5;
            string the_steps[5] = {
                "Prepare bread slices",
                "Heat toaster or pan",
                "Place bread inside",
                "Toast until golden",
                "Serve warm"
            };
            string time_to_redy = "35m";
            string nutes_abut_the_cook = "Light breakfast bread";
            string evaluation_of_the_recipe = "|*| |*| |*| |*| |*| |*| |*| |*| |-| |-| (8/10)";
            vector<string> user_name_own_comment = { "Khaled Al-Mutairi", "Lina Bint Ahmed" };
            vector<string> comments = {
                "Nice and crunchy .",
                "Perfect with jam ."
            };
            vector<int> like_comment = { 7, 5 };
            vector<int> unlike_comment = { 0, 0 };
        };
    public:
        nauras_creat_it1 nauras_1;
        nauras_creat_it2 nauras_2;
        nauras_creat_it3 nauras_3;

        void show_share_nauras_1() const
        {
            cout << "| " << nauras_1.name_of_cook << " |";
        }
        void show_share_nauras_2() const
        {
            cout << "| " << nauras_2.name_of_cook << " |";
        }
        void show_share_nauras_3() const
        {
            cout << "| " << nauras_3.name_of_cook << " |";
        }
        void show_share_nauras_cook(string shape_of_show, string line_or_star)const
        {
            if (shape_of_show == "le" || shape_of_show == "Le")
            {

                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   " << "---------------";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   " << "***************";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "                    " << "---------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "                    " << "***************\n";
                cout << "   "; show_share_nauras_1();
                cout << "                    "; show_share_nauras_2(); cout << "\n";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   " << "---------------";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   " << "***************";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "                    " << "---------------\n\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "                    " << "***************\n\n";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   " << "---------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   " << "***************\n";
                cout << "   "; show_share_nauras_3(); cout << "\n";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   " << "---------------";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   " << "***************";

            }
            if (shape_of_show == "cr" || shape_of_show == "Cr")
            {
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n   ---------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   ***************\n";
                cout << "   "; show_share_nauras_1();
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n   ---------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   ***************\n";

                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n   ---------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   ***************\n";
                cout << "   "; show_share_nauras_2(); cout << "\n";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   ---------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   ***************\n";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n   ---------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   ***************\n";
                cout << "   "; show_share_nauras_3();
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n   ---------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   ***************\n";
            }
        }

        void display_nauras_part_1() const
        {
            cout << "cook name: " << nauras_1.name_of_cook << ".\nthe time [" << nauras_1.time_to_redy << "].\nhow manysteps [" << nauras_1.num_of_steps << "].\nTHE STEPS:\n";
            for (int i = 0; i < nauras_1.num_of_steps; i++)
            {
                cout << i + 1 << " - " << nauras_1.the_steps[i] << ".\n";
            }
            cout << "NOTE :" << nauras_1.nutes_abut_the_cook;

            cout << "\nRATINGs :" << nauras_1.evaluation_of_the_recipe << "\n";

            cout << "comments numper :" << nauras_1.user_name_own_comment.size() << " \n";
            cout << "-------------------------------------\n";
        }
        void display_nauras_part_2() const
        {
            cout << "cook name: " << nauras_2.name_of_cook << ".\nthe time [" << nauras_2.time_to_redy << "].\nhow manysteps [" << nauras_2.num_of_steps << "].\nTHE STEPS:\n";
            for (int i = 0; i < nauras_2.num_of_steps; i++)
            {
                cout << i + 1 << " - " << nauras_2.the_steps[i] << ".\n";
            }
            cout << "NOTE :" << nauras_2.nutes_abut_the_cook;

            cout << "\nRATINGs :" << nauras_2.evaluation_of_the_recipe << "\n";

            cout << "comments numper :" << nauras_2.user_name_own_comment.size() << " \n";
            cout << "-------------------------------------\n";
        };
        void display_nauras_part_3() const
        {
            cout << "cook name: " << nauras_3.name_of_cook << ".\nthe time [" << nauras_3.time_to_redy << "].\nhow manysteps [" << nauras_3.num_of_steps << "].\nTHE STEPS:\n";
            for (int i = 0; i < nauras_3.num_of_steps; i++)
            {
                cout << i + 1 << " - " << nauras_3.the_steps[i] << ".\n";
            }
            cout << "NOTE :" << nauras_3.nutes_abut_the_cook;

            cout << "\nRATINGs :" << nauras_3.evaluation_of_the_recipe << "\n";

            cout << "comments numper :" << nauras_3.user_name_own_comment.size() << " \n";
            cout << "-------------------------------------\n";
        };


        void display_comments_nauras_online_part_1()const
        {


            for (int i = 0; i < nauras_1.user_name_own_comment.size(); i++)
            {
                cout << nauras_1.user_name_own_comment[i] << endl;
                cout << nauras_1.comments[i] << endl;
                cout << "+ Likes: " << nauras_1.like_comment[i] << "    | - Dislikes: " << nauras_1.unlike_comment[i] << "\n\n";

            }
        }
        void display_comments_nauras_online_part_2()const
        {
            for (int i = 0; i < nauras_2.user_name_own_comment.size(); i++)
            {
                cout << nauras_2.user_name_own_comment[i] << endl;
                cout << nauras_2.comments[i] << endl;
                cout << "+ Likes: " << nauras_2.like_comment[i] << "    | - Dislikes: " << nauras_2.unlike_comment[i] << "\n\n";

            }
        }
        void display_comments_nauras_online_part_3()const
        {
            for (int i = 0; i < nauras_3.user_name_own_comment.size(); i++)
            {
                cout << nauras_3.user_name_own_comment[i] << endl;
                cout << nauras_3.comments[i] << endl;
                cout << "+ Likes: " << nauras_3.like_comment[i] << "    | - Dislikes: " << nauras_3.unlike_comment[i] << "\n\n";

            }
        }
        void add_new_comment_nauras_online_part_1(string your_user_name)
        {
            string comment;
            while (true)
            {
                cout << "\nWrite your comment: \n  ";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                getline(cin, comment);
                nauras_1.user_name_own_comment.push_back(your_user_name);
                nauras_1.comments.push_back(comment);
                nauras_1.like_comment.push_back(0);
                nauras_1.unlike_comment.push_back(0);
                cout << "do you want to add another comments ?      [yes'no]\n";
                string yes_no;
                cin >> yes_no;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                while (!(yes_no == "yes" || yes_no == "Yes" || yes_no == "no" || yes_no == "No"))
                {
                    cout << "unknow code..tray again\n";
                    cout << "do you want to add another comments ?      [yes'no]\n";
                    cin >> yes_no;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                if (yes_no == "no" || yes_no == "No")
                    break;
            }
        }
        void add_new_comment_nauras_online_part_2(string your_user_name)
        {
            string comment;
            while (true)
            {
                cout << "\nWrite your comment: \n  ";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                getline(cin, comment);
                nauras_2.user_name_own_comment.push_back(your_user_name);
                nauras_2.comments.push_back(comment);
                nauras_2.like_comment.push_back(0);
                nauras_2.unlike_comment.push_back(0);
                cout << "do you want to add another comments ?      [yes'no]\n";
                string yes_no;
                cin >> yes_no;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                while (!(yes_no == "yes" || yes_no == "Yes" || yes_no == "no" || yes_no == "No"))
                {
                    cout << "unknow code..tray again\n";
                    cout << "do you want to add another comments ?      [yes'no]\n";
                    cin >> yes_no;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                if (yes_no == "no" || yes_no == "No")
                    break;
            }
        }
        void add_new_comment_nauras_online_part_3(string your_user_name)
        {
            string comment;
            while (true)
            {
                cout << "\nWrite your comment: \n  ";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                getline(cin, comment);
                nauras_3.user_name_own_comment.push_back(your_user_name);
                nauras_3.comments.push_back(comment);
                nauras_3.like_comment.push_back(0);
                nauras_3.unlike_comment.push_back(0);
                cout << "do you want to add another comments ?      [yes'no]\n";
                string yes_no;
                cin >> yes_no;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                while (!(yes_no == "yes" || yes_no == "Yes" || yes_no == "no" || yes_no == "No"))
                {
                    cout << "unknow code..tray again\n";
                    cout << "do you want to add another comments ?      [yes'no]\n";
                    cin >> yes_no;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                if (yes_no == "no" || yes_no == "No")
                    break;
            }
        }

    };

    class cooker_naglaa
    {
    private:
        struct naglaa_creat_it1
        {
            string name_of_cook = "Coffee";
            int num_of_steps = 4;
            string the_steps[4] = {
                "Boil clean water",
                "Add coffee powder",
                "Stir gently",
                "Serve hot"
            };
            string time_to_redy = "5m";
            string nutes_abut_the_cook = "Strong hot coffee";
            string evaluation_of_the_recipe = "|*| |*| |*| |*| |*| |*| |*| |*| |*| |-| (9/10)";
            vector<string> user_name_own_comment = { "Omar Al-Jabri", "Rana Al-Harithi" };
            vector<string> comments = {
                "Strong aroma and perfect .",
                "Wakes me up every morning ."
            };
            vector<int> like_comment = { 25, 22 };
            vector<int> unlike_comment = { 0, 1 };
        };

        struct naglaa_creat_it2
        {
            string name_of_cook = "Rice with Vegetables";
            int num_of_steps = 9;
            string the_steps[9] = {
                "Wash rice thoroughly",
                "Chop vegetables evenly",
                "Heat oil in pot",
                "Add vegetables",
                "Stir until softened",
                "Add water",
                "Bring to boil",
                "Add rice",
                "Cook until done"
            };
            string time_to_redy = "1h-10m";
            string nutes_abut_the_cook = "Healthy mixed rice";
            string evaluation_of_the_recipe = "|*| |*| |*| |*| |*| |*| |*| |*| |-| |-| (8/10)";
            vector<string> user_name_own_comment = { "Noura Al-Saeed", "Tariq Al-Haddad" };
            vector<string> comments = {
                "Healthy and tasty .",
                "Everyone enjoyed it ."
            };
            vector<int> like_comment = { 14, 11 };
            vector<int> unlike_comment = { 0, 1 };
        };

        struct naglaa_creat_it3
        {
            string name_of_cook = "Cream Soup";
            int num_of_steps = 10;
            string the_steps[10] = {
                "Heat butter in pot",
                "Add chopped onions",
                "Cook until soft",
                "Add flour",
                "Stir continuously",
                "Add milk slowly",
                "Add seasoning",
                "Cook until thick",
                "Blend if needed",
                "Serve warm"
            };
            string time_to_redy = "20m";
            string nutes_abut_the_cook = "Smooth creamy soup";
            string evaluation_of_the_recipe = "|*| |*| |*| |*| |*| |*| |*| |-| |-| |-| (7/10)";
            vector<string> user_name_own_comment = { "Maha Al-Kuwaiti", "Sami Al-Rashid" };
            vector<string> comments = {
                "Smooth and creamy .",
                "Perfect warmth for cold days ."
            };
            vector<int> like_comment = { 12, 10 };
            vector<int> unlike_comment = { 0, 0 };
        };
    public:
        naglaa_creat_it1 naglaa_1;
        naglaa_creat_it2 naglaa_2;
        naglaa_creat_it3 naglaa_3;


        void show_share_naglaa_1() const
        {
            cout << "| " << naglaa_1.name_of_cook << " |";
        }
        void show_share_naglaa_2() const
        {
            cout << "| " << naglaa_2.name_of_cook << " |";
        }
        void show_share_naglaa_3() const
        {
            cout << "| " << naglaa_3.name_of_cook << " |";
        }
        void show_share_naglaa_cook(string shape_of_show, string line_or_star)const
        {
            if (shape_of_show == "le" || shape_of_show == "Le")
            {

                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   ----------";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   **********";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "                    " << "------------------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "                    " << "************************\n";
                cout << "   "; show_share_naglaa_1();
                cout << "                    "; show_share_naglaa_2(); cout << "\n";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   " << "----------";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   " << "**********";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "                    " << "------------------------\n\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "                    " << "************************\n\n";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   " << "--------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   " << "**************\n";
                cout << "   "; show_share_naglaa_3(); cout << "\n";

                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   " << "--------------";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   " << "**************";

            }
            if (shape_of_show == "cr" || shape_of_show == "Cr")
            {
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n   ----------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   **********\n";
                cout << "   "; show_share_naglaa_1();
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n   ----------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   **********\n";

                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n   ------------------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   ************************\n";
                cout << "   "; show_share_naglaa_2(); cout << "\n";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   ------------------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   ************************\n";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n   --------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   **************\n";
                cout << "   "; show_share_naglaa_3();
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n   --------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   **************\n";
            }
        }

        void display_naglaa_part_1() const
        {
            cout << "cook name: " << naglaa_1.name_of_cook << ".\nthe time [" << naglaa_1.time_to_redy << "].\nhow manysteps [" << naglaa_1.num_of_steps << "].\nTHE STEPS:\n";
            for (int i = 0; i < naglaa_1.num_of_steps; i++)
            {
                cout << i + 1 << " - " << naglaa_1.the_steps[i] << ".\n";
            }
            cout << "NOTE :" << naglaa_1.nutes_abut_the_cook;

            cout << "\nRATINGs :" << naglaa_1.evaluation_of_the_recipe << "\n";

            cout << "comments numper :" << naglaa_1.user_name_own_comment.size() << " \n";
            cout << "-------------------------------------\n";
        }
        void display_naglaa_part_2() const
        {
            cout << "cook name: " << naglaa_2.name_of_cook << ".\nthe time [" << naglaa_2.time_to_redy << "].\nhow manysteps [" << naglaa_2.num_of_steps << "].\nTHE STEPS:\n";
            for (int i = 0; i < naglaa_2.num_of_steps; i++)
            {
                cout << i + 1 << " - " << naglaa_2.the_steps[i] << ".\n";
            }
            cout << "NOTE :" << naglaa_2.nutes_abut_the_cook;

            cout << "\nRATINGs :" << naglaa_2.evaluation_of_the_recipe << "\n";

            cout << "comments numper :" << naglaa_2.user_name_own_comment.size() << " \n";
            cout << "-------------------------------------\n";
        };
        void display_naglaa_part_3() const
        {
            cout << "cook name: " << naglaa_3.name_of_cook << ".\nthe time [" << naglaa_3.time_to_redy << "].\nhow manysteps [" << naglaa_3.num_of_steps << "].\nTHE STEPS:\n";
            for (int i = 0; i < naglaa_3.num_of_steps; i++)
            {
                cout << i + 1 << " - " << naglaa_3.the_steps[i] << ".\n";
            }
            cout << "NOTE :" << naglaa_3.nutes_abut_the_cook;

            cout << "\nRATINGs :" << naglaa_3.evaluation_of_the_recipe << "\n";

            cout << "comments numper :" << naglaa_3.user_name_own_comment.size() << " \n";
            cout << "-------------------------------------\n";
        };

        void display_comments_naglaa_online_part_1()const
        {

            for (int i = 0; i < naglaa_1.user_name_own_comment.size(); i++)
            {
                cout << naglaa_1.user_name_own_comment[i] << endl;
                cout << naglaa_1.comments[i] << endl;
                cout << "+ Likes: " << naglaa_1.like_comment[i] << "    | - Dislikes: " << naglaa_1.unlike_comment[i] << "\n\n";

            }
        }
        void display_comments_naglaa_online_part_2()const
        {
            for (int i = 0; i < naglaa_2.user_name_own_comment.size(); i++)
            {
                cout << naglaa_2.user_name_own_comment[i] << endl;
                cout << naglaa_2.comments[i] << endl;
                cout << "+ Likes: " << naglaa_2.like_comment[i] << "    | - Dislikes: " << naglaa_2.unlike_comment[i] << "\n\n";

            }
        }
        void display_comments_naglaa_online_part_3()const
        {
            for (int i = 0; i < naglaa_3.user_name_own_comment.size(); i++)
            {
                cout << naglaa_3.user_name_own_comment[i] << endl;
                cout << naglaa_3.comments[i] << endl;
                cout << "+ Likes: " << naglaa_3.like_comment[i] << "    | - Dislikes: " << naglaa_3.unlike_comment[i] << "\n\n";

            }
        }
        void add_new_comment_naglaa_online_part_1(string your_user_name)
        {
            string comment;
            while (true)
            {
                cout << "\nWrite your comment: \n  ";
                getline(cin, comment);
                naglaa_1.user_name_own_comment.push_back(your_user_name);
                naglaa_1.comments.push_back(comment);
                naglaa_1.like_comment.push_back(0);
                naglaa_1.unlike_comment.push_back(0);
                cout << "do you want to add another comments ?      [yes'no]\n";
                string yes_no;
                cin >> yes_no;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                while (!(yes_no == "yes" || yes_no == "Yes" || yes_no == "no" || yes_no == "No"))
                {
                    cout << "unknow code..tray again\n";
                    cout << "do you want to add another comments ?      [yes'no]\n";
                    cin >> yes_no;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                if (yes_no == "no" || yes_no == "No")
                    break;
            }
        }
        void add_new_comment_naglaa_online_part_2(string your_user_name)
        {
            string comment;
            while (true)
            {
                cout << "\nWrite your comment: \n  ";
                getline(cin, comment);
                naglaa_2.user_name_own_comment.push_back(your_user_name);
                naglaa_2.comments.push_back(comment);
                naglaa_2.like_comment.push_back(0);
                naglaa_2.unlike_comment.push_back(0);
                cout << "do you want to add another comments ?      [yes'no]\n";
                string yes_no;
                cin >> yes_no;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                while (!(yes_no == "yes" || yes_no == "Yes" || yes_no == "no" || yes_no == "No"))
                {
                    cout << "unknow code..tray again\n";
                    cout << "do you want to add another comments ?      [yes'no]\n";
                    cin >> yes_no;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                if (yes_no == "no" || yes_no == "No")
                    break;
            }
        }
        void add_new_comment_naglaa_online_part_3(string your_user_name)
        {
            string comment;
            while (true)
            {
                cout << "\nWrite your comment: \n  ";
                getline(cin, comment);
                naglaa_3.user_name_own_comment.push_back(your_user_name);
                naglaa_3.comments.push_back(comment);
                naglaa_3.like_comment.push_back(0);
                naglaa_3.unlike_comment.push_back(0);
                cout << "do you want to add another comments ?      [yes'no]\n";
                string yes_no;
                cin >> yes_no;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                while (!(yes_no == "yes" || yes_no == "Yes" || yes_no == "no" || yes_no == "No"))
                {
                    cout << "unknow code..tray again\n";
                    cout << "do you want to add another comments ?      [yes'no]\n";
                    cin >> yes_no;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                if (yes_no == "no" || yes_no == "No")
                    break;
            }
        }
    };

    class cooker_ahmad
    {
    private:
        struct ahmad_creat_it1
        {
            string name_of_cook = "Grilled Sandwich";
            int num_of_steps = 6;
            string the_steps[6] = {
                "Prepare sandwich bread",
                "Add filling evenly",
                "Heat grill pan",
                "Place sandwich on pan",
                "Grill both sides",
                "Serve hot"
            };
            string time_to_redy = "15m";
            string nutes_abut_the_cook = "Hot grilled sandwich";
            string evaluation_of_the_recipe = "|*| |*| |*| |*| |*| |*| |*| |-| |-| |-| (7/10)";
            vector<string> user_name_own_comment = { "Riyad Al-Farouq", "Dana Al-Harbi" };
            vector<string> comments = {
                "Tasty and easy .",
                "Quick snack, loved it ."
            };
            vector<int> like_comment = { 8, 6 };
            vector<int> unlike_comment = { 0, 0 };
        };

        struct ahmad_creat_it2
        {
            string name_of_cook = "Traditional Stew";
            int num_of_steps = 14;
            string the_steps[14] = {
                "Clean meat properly",
                "Cut meat into pieces",
                "Heat oil in pot",
                "Add onions",
                "Cook onions well",
                "Add meat",
                "Brown the meat",
                "Add spices",
                "Add water",
                "Bring to boil",
                "Reduce heat",
                "Cover pot",
                "Cook slowly",
                "Serve hot"
            };
            string time_to_redy = "50m";
            string nutes_abut_the_cook = "Slow cooked traditional stew";
            string evaluation_of_the_recipe = "|*| |*| |*| |*| |*| |*| |*| |*| |*| |*| (10/10)";
            vector<string> user_name_own_comment = { "Yousef Al-Mahdi", "Fatima Al-Saadi" };
            vector<string> comments = {
                "Rich flavor and tender meat .",
                "Family favorite, very comforting ."
            };
            vector<int> like_comment = { 10, 9 };
            vector<int> unlike_comment = { 0, 0 };
        };

        struct ahmad_creat_it3
        {
            string name_of_cook = "Baked Pasta";
            int num_of_steps = 12;
            string the_steps[12] = {
                "Boil pasta until half cooked",
                "Drain pasta well",
                "Prepare baking dish",
                "Add pasta to dish",
                "Add sauce",
                "Mix evenly",
                "Add cheese layer",
                "Preheat oven",
                "Place dish inside",
                "Bake until cheese melts",
                "Remove from oven",
                "Serve warm"
            };
            string time_to_redy = "55m";
            string nutes_abut_the_cook = "Oven baked pasta dish";
            string evaluation_of_the_recipe = "|*| |*| |*| |*| |-| |-| |-| |-| |-| |-| (4/10)";
            vector<string> user_name_own_comment = { "Ahmed Al-Tamimi", "Sara Al-Fayez" };
            vector<string> comments = {
                "Cheesy and delicious ",
                "Perfect baked pasta for family dinner "
            };
            vector<int> like_comment = { 14, 12 };
            vector<int> unlike_comment = { 0, 0 };
        };
    public:
        ahmad_creat_it1 ahmad_1;
        ahmad_creat_it2 ahmad_2;
        ahmad_creat_it3 ahmad_3;


        void show_share_ahmad_1() const
        {
            cout << "| " << ahmad_1.name_of_cook << " |";
        }
        void show_share_ahmad_2() const
        {
            cout << "| " << ahmad_2.name_of_cook << " |";
        }
        void show_share_ahmad_3() const
        {
            cout << "| " << ahmad_3.name_of_cook << " |";
        }
        void show_share_ahmad_cook(string shape_of_show, string line_or_star)const
        {
            if (shape_of_show == "le" || shape_of_show == "Le")
            {

                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   --------------------";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   ********************";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "                    " << "--------------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "                    " << "********************\n";
                cout << "   "; show_share_ahmad_1();
                cout << "                    "; show_share_ahmad_2(); cout << "\n";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   --------------------";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   ********************";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "                    --------------------\n\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "                    ********************\n\n";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   " << "---------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   " << "***************\n";
                cout << "   "; show_share_ahmad_3(); cout << "\n";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   " << "---------------";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   " << "***************";

            }
            if (shape_of_show == "cr" || shape_of_show == "Cr")
            {
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n   --------------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   ********************\n";
                cout << "   "; show_share_ahmad_1();
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n   --------------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   ********************\n";

                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n    --------------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   ********************\n";
                cout << "   "; show_share_ahmad_2(); cout << "\n";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "   --------------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "   ********************\n";
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n   ---------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   ***************\n";
                cout << "   "; show_share_ahmad_3();
                if (line_or_star == "li" || line_or_star == "Li")
                    cout << "\n   ---------------\n";
                if (line_or_star == "st" || line_or_star == "St")
                    cout << "\n   ***************\n";
            }
        }

        void display_ahmad_part_1() const
        {
            cout << "cook name: " << ahmad_1.name_of_cook << ".\nthe time [" << ahmad_1.time_to_redy << "].\nhow manysteps [" << ahmad_1.num_of_steps << "].\nTHE STEPS:\n";
            for (int i = 0; i < ahmad_1.num_of_steps; i++)
            {
                cout << i + 1 << " - " << ahmad_1.the_steps[i] << ".\n";
            }
            cout << "NOTE :" << ahmad_1.nutes_abut_the_cook;

            cout << "\nRATINGs :" << ahmad_1.evaluation_of_the_recipe << "\n";

            cout << "comments numper :" << ahmad_1.user_name_own_comment.size() << " \n";
            cout << "-------------------------------------\n";
        }
        void display_ahmad_part_2() const
        {
            cout << "cook name: " << ahmad_2.name_of_cook << ".\nthe time [" << ahmad_2.time_to_redy << "].\nhow manysteps [" << ahmad_2.num_of_steps << "].\nTHE STEPS:\n";
            for (int i = 0; i < ahmad_2.num_of_steps; i++)
            {
                cout << i + 1 << " - " << ahmad_2.the_steps[i] << ".\n";
            }
            cout << "NOTE :" << ahmad_2.nutes_abut_the_cook;

            cout << "\nRATINGs :" << ahmad_2.evaluation_of_the_recipe << "\n";

            cout << "comments numper :" << ahmad_2.user_name_own_comment.size() << " \n";
            cout << "-------------------------------------\n";
        };
        void display_ahmad_part_3() const
        {
            cout << "cook name: " << ahmad_3.name_of_cook << ".\nthe time [" << ahmad_3.time_to_redy << "].\nhow manysteps [" << ahmad_3.num_of_steps << "].\nTHE STEPS:\n";
            for (int i = 0; i < ahmad_3.num_of_steps; i++)
            {
                cout << i + 1 << " - " << ahmad_3.the_steps[i] << ".\n";
            }
            cout << "NOTE :" << ahmad_3.nutes_abut_the_cook;

            cout << "\nRATINGs :" << ahmad_3.evaluation_of_the_recipe << "\n";

            cout << "comments numper :" << ahmad_3.user_name_own_comment.size() << " \n";
            cout << "-------------------------------------\n";
        };

        void display_comments_ahmad_online_part_1()const
        {

            for (int i = 0; i < ahmad_1.user_name_own_comment.size(); i++)
            {
                cout << ahmad_1.user_name_own_comment[i] << endl;
                cout << ahmad_1.comments[i] << endl;
                cout << "+ Likes: " << ahmad_1.like_comment[i] << "    | - Dislikes: " << ahmad_1.unlike_comment[i] << "\n\n";

            }
        }
        void display_comments_ahmad_online_part_2()const
        {
            for (int i = 0; i < ahmad_2.user_name_own_comment.size(); i++)
            {
                cout << ahmad_2.user_name_own_comment[i] << endl;
                cout << ahmad_2.comments[i] << endl;
                cout << "+ Likes: " << ahmad_2.like_comment[i] << "    | - Dislikes: " << ahmad_2.unlike_comment[i] << "\n\n";

            }
        }
        void display_comments_ahmad_online_part_3()const
        {
            for (int i = 0; i < ahmad_3.user_name_own_comment.size(); i++)
            {
                cout << ahmad_3.user_name_own_comment[i] << endl;
                cout << ahmad_3.comments[i] << endl;
                cout << "+ Likes: " << ahmad_3.like_comment[i] << "    | - Dislikes: " << ahmad_3.unlike_comment[i] << "\n\n";

            }
        }
        void add_new_comment_ahmad_online_part_1(string your_user_name)
        {
            string comment;
            while (true)
            {
                cout << "\nWrite your comment: \n  ";
                getline(cin, comment);
                ahmad_1.user_name_own_comment.push_back(your_user_name);
                ahmad_1.comments.push_back(comment);
                ahmad_1.like_comment.push_back(0);
                ahmad_1.unlike_comment.push_back(0);
                cout << "do you want to add another comments ?      [yes'no]\n";
                string yes_no;
                cin >> yes_no;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                while (!(yes_no == "yes" || yes_no == "Yes" || yes_no == "no" || yes_no == "No"))
                {
                    cout << "unknow code..tray again\n";
                    cout << "do you want to add another comments ?      [yes'no]\n";
                    cin >> yes_no;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                if (yes_no == "no" || yes_no == "No")
                    break;
            }
        }
        void add_new_comment_ahmad_online_part_2(string your_user_name)
        {
            string comment;
            while (true)
            {
                cout << "\nWrite your comment: \n  ";
                getline(cin, comment);
                ahmad_2.user_name_own_comment.push_back(your_user_name);
                ahmad_2.comments.push_back(comment);
                ahmad_2.like_comment.push_back(0);
                ahmad_2.unlike_comment.push_back(0);
                cout << "do you want to add another comments ?      [yes'no]\n";
                string yes_no;
                cin >> yes_no;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                while (!(yes_no == "yes" || yes_no == "Yes" || yes_no == "no" || yes_no == "No"))
                {
                    cout << "unknow code..tray again\n";
                    cout << "do you want to add another comments ?      [yes'no]\n";
                    cin >> yes_no;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                if (yes_no == "no" || yes_no == "No")
                    break;
            }
        }
        void add_new_comment_ahmad_online_part_3(string your_user_name)
        {
            string comment;
            while (true)
            {
                cout << "\nWrite your comment: \n  ";
                getline(cin, comment);
                ahmad_3.user_name_own_comment.push_back(your_user_name);
                ahmad_3.comments.push_back(comment);
                ahmad_3.like_comment.push_back(0);
                ahmad_3.unlike_comment.push_back(0);
                cout << "do you want to add another comments ?      [yes'no]\n";
                string yes_no;
                cin >> yes_no;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                while (!(yes_no == "yes" || yes_no == "Yes" || yes_no == "no" || yes_no == "No"))
                {
                    cout << "unknow code..tray again\n";
                    cout << "do you want to add another comments ?      [yes'no]\n";
                    cin >> yes_no;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                if (yes_no == "no" || yes_no == "No")
                    break;
            }
        }
    };

public:

    cooker_mohammed* mohammed = new cooker_mohammed;
    cooker_mauadah* mauadah = new cooker_mauadah;
    cooker_king* king = new cooker_king;
    cooker_nauras* nauras = new cooker_nauras;
    cooker_naglaa* naglaa = new cooker_naglaa;
    cooker_ahmad* ahmad = new cooker_ahmad;

    void display_names_old_acount(string acount, string line_or_star)const
    {
        cout << "\nONLINE SHEFS:\n";
        cout << "-------------\n\n";

        if (line_or_star == "st" || line_or_star == "St")
            cout << "************                        ***********\n";
        if (line_or_star == "li" || line_or_star == "Li")
            cout << "------------                        -----------\n";

        cout << "| MOHAMMAD |                        | MAUADAH |\n";
        if (line_or_star == "st" || line_or_star == "St")
            cout << "************                        ***********\n";
        if (line_or_star == "li" || line_or_star == "Li")
            cout << "------------                        -----------\n";

        if (line_or_star == "st" || line_or_star == "St")
            cout << "********                       ***********\n";
        if (line_or_star == "li" || line_or_star == "Li")
            cout << "--------                        ----------\n";

        cout << "| KING |                        | NAURAS |\n";
        if (line_or_star == "st" || line_or_star == "St")
            cout << "********                       ***********\n";
        if (line_or_star == "li" || line_or_star == "Li")
            cout << "--------                        ----------\n";
        if (line_or_star == "st" || line_or_star == "St")
            cout << "**********                        *********\n";
        if (line_or_star == "li" || line_or_star == "Li")
            cout << "----------                        ---------\n";
        cout << "| NAGLAA |                        | AHMAD |\n";
        if (line_or_star == "st" || line_or_star == "St")
            cout << "**********                        *********\n";
        if (line_or_star == "li" || line_or_star == "Li")
            cout << "----------                        ---------\n\n";
    }
    void display_names_new_acount(string acount, string line_or_star)const
    {
        cout << "\nONLINE SHEFS:\n";
        cout << "-------------\n\n";
        if (line_or_star == "st" || line_or_star == "St")
            cout << "************                        ***********\n";
        if (line_or_star == "li" || line_or_star == "Li")
            cout << "------------                        -----------\n";

        cout << "| MOHAMMAD |                        | MAUADAH |\n";
        if (line_or_star == "st" || line_or_star == "St")
            cout << "************                        ***********\n";
        if (line_or_star == "li" || line_or_star == "Li")
            cout << "------------                        -----------\n";

        if (line_or_star == "st" || line_or_star == "St")
            cout << "********                        ***********\n";
        if (line_or_star == "li" || line_or_star == "Li")
            cout << "--------                        ----------\n";

        cout << "| KING |                        | NAURAS |\n";
        if (line_or_star == "st" || line_or_star == "St")
            cout << "********                        ***********\n";
        if (line_or_star == "li" || line_or_star == "Li")
            cout << "--------                        ----------\n";
        if (line_or_star == "st" || line_or_star == "St")
            cout << "**********                        *********\n";
        if (line_or_star == "li" || line_or_star == "Li")
            cout << "----------                        ---------\n";
        cout << "| NAGLAA |                        | AHMAD |\n";
        if (line_or_star == "st" || line_or_star == "St")
            cout << "**********                        *********\n";
        if (line_or_star == "li" || line_or_star == "Li")
            cout << "----------                        ---------\n";

        if (line_or_star == "st" || line_or_star == "St")
            cout << "**************\n";
        if (line_or_star == "li" || line_or_star == "Li")
            cout << "--------------\n";
        cout << "| FOUR DOLAR |\n";
        if (line_or_star == "st" || line_or_star == "St")
            cout << "**************\n";
        if (line_or_star == "li" || line_or_star == "Li")
            cout << "--------------\n\n";
    }

    ~internet_cooker()
    {
        delete mohammed;
        delete mauadah;
        delete king;
        delete nauras;
        delete ahmad;
        delete naglaa;
    }

};




int main()
{
    my_cook mc;
    my_share_in_intrnet m_s_int;
    internet_cooker internet_cookers;
    string shape_of_show = "le", line_or_star = "li";
    cout << "          -------------------login-------------------\n";

    cout << "enter your account user name:             {I have already calculate [ih] }\n";
    string user_name;
    string passowrd;

    cin >> user_name;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if (user_name == "ih" || user_name == "Ih")
    {
        cout << "OK...enter your old user name: \n";
        getline(cin, user_name);
        cout << "enter the passowrd:\n";
        cin >> passowrd;
        while (!(user_name == "a" && passowrd == "b"))
        {
            cout << "some thing is wrroing tray again...\nenter your old user name: \n";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            getline(cin, user_name);
            cout << "enter the passowrd:\n";
            cin >> passowrd;

        }
    }
    else if (!(user_name == "ih" || user_name == "Ih"))
    {
        cout << "enter the passowrd:\n";
        cin >> passowrd;
    }

the_main_list:
    welcome();
    cout << "MY OWN COOKS :               [mc]" << "\nVISIT ONLINE COOKS:          [oc]\nSETTING:                     [se]" << "\nEXIT:                        [ex]\n";
    string choos;
    cin >> choos;
    while (!(choos == "mc" || choos == "Mc" || choos == "oc" || choos == "Oc" || choos == "se" || choos == "Se" || choos == "ex" || choos == "Ex"))
    {
        cout << "unknow code..tray again\n\n";
        welcome();
        cout << "MY OWN COOKS :               [mc]" << "\nVISIT ONLINE COOKS:          [oc]\nSETTING:                     [se]" << "\nEXIT:                        [ex]\n";
        cin >> choos;
    }
    if (user_name == "a" && passowrd == "b")
    {

        cout << "---------------------------------------\n";
        if (choos == "mc" || choos == "Mc")
        {
        back_main_own_cook_old_acount:
            mc.my_cook_show_main_name_of_my_cook(shape_of_show, line_or_star);
            cout << "\nenter cook name to display it's list:               to back [back]\nenter [ad] to add a new cook:\n";
            string cook_name_to_display;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            getline(cin, cook_name_to_display);
            while (cook_name_to_display.empty())
            {
                cout << "entering can not be empty....tray again\n";
                cout << "enter cook name to display it's list:               to back [back]\nenter [ad] to add a new cook:\n";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                getline(cin, cook_name_to_display);
            }
            mc.if_cook_found_return(cook_name_to_display);
            while (!(cook_name_to_display == "Fried Eggs" || cook_name_to_display == "Fried" || cook_name_to_display == "fried Eggs" || cook_name_to_display == "fried" || cook_name_to_display == "White Rice" || cook_name_to_display == "White" || cook_name_to_display == "white Rice" || cook_name_to_display == "white" || cook_name_to_display == "Chicken Kabsa" || cook_name_to_display == "Chicken" || cook_name_to_display == "chicken Kabsa" || cook_name_to_display == "chicken" || cook_name_to_display == "Tea" || cook_name_to_display == "tea" || cook_name_to_display == "Pasta" || cook_name_to_display == "pasta" || cook_name_to_display == "Fresh Salad" || cook_name_to_display == "Fresh" || cook_name_to_display == "fresh Salad" || cook_name_to_display == "fresh" || mc.is_cook_found || cook_name_to_display == "back" || cook_name_to_display == "Back" || cook_name_to_display == "ad" || cook_name_to_display == "Ad"))
            {
                cout << "sorry unknow code ...\n";
                cout << "enter cook name to display it's list:               to back [back]\nenter [ad] to add a new cook:\n";
                //cin.ignore(numeric_limits<streamsize>::max(), '\n');
                getline(cin, cook_name_to_display);
                while (cook_name_to_display.empty())
                {
                    cout << "entering can not be empty....tray again\n";
                    cout << "enter cook name to display it's list:               to back [back]\nenter [ad] to add a new cook:\n";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    getline(cin, cook_name_to_display);
                }
                mc.if_cook_found_return(cook_name_to_display);

            }
            if (cook_name_to_display == "Fried Eggs" || cook_name_to_display == "Fried" || cook_name_to_display == "fried Eggs" || cook_name_to_display == "fried")
            {
                mc.display_my_cook_own_part_1();
            }
            else if (cook_name_to_display == "White Rice" || cook_name_to_display == "White" || cook_name_to_display == "white Rice" || cook_name_to_display == "white")
            {
                mc.display_my_cook_own_part_2();

            }
            else if (cook_name_to_display == "Chicken Kabsa" || cook_name_to_display == "Chicken" || cook_name_to_display == "chicken Kabsa" || cook_name_to_display == "chicken")
            {
                mc.display_my_cook_own_part_3();

            }
            else if (cook_name_to_display == "Tea" || cook_name_to_display == "tea")
            {
                mc.display_my_cook_own_part_4();

            }
            else if (cook_name_to_display == "Pasta" || cook_name_to_display == "pasta")
            {
                mc.display_my_cook_own_part_5();
            }
            else if (cook_name_to_display == "Fresh Salad" || cook_name_to_display == "Fresh" || cook_name_to_display == "fresh Salad" || cook_name_to_display == "fresh")
            {
                mc.display_my_cook_own_part_6();

            }
            else if (mc.is_cook_found)
            {
                mc.display_a_new_cook_with_a_new_acount(cook_name_to_display);
            }
            else if (cook_name_to_display == "back" || cook_name_to_display == "Back")
            {
                goto the_main_list;
            }
            else if (cook_name_to_display == "ad" || cook_name_to_display == "Ad")
            {
                mc.the_new_cook_in_main();

            }

            cout << "\nbress [bb] to back one - [back to] back to the main list:\n";
            string must_be_back;
            cin >> must_be_back;
            while (true)
            {
                if (must_be_back == "bb" || must_be_back == "Bb")
                {
                    goto back_main_own_cook_old_acount;
                }
                if (must_be_back == "back" || must_be_back == "Back")
                {
                    goto the_main_list;
                }
                cout << "unknow code..\n";
                cout << "\nbress [bb] to back one - [back] to back to the main list:\n";
                cin >> must_be_back;

            }
        }
        if (choos == "oc" || choos == "Oc")
        {
            cout << "pleass write your passowrd again:           bress [back] to back to the main list\n";
            string passowrd_again;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            getline(cin, passowrd_again);
            while (passowrd_again != passowrd || passowrd_again == "back" || passowrd_again == "Back")
            {
                cout << "wroing passowrd....tray again.\n";
                cout << "pleass write your passowrd again:           bress [back] to back to the main list\n";
                getline(cin, passowrd_again);
            }
            if (passowrd_again == "back" || passowrd_again == "Back")
            {
                goto the_main_list;

            }
        place_bb_1:
            internet_cookers.display_names_new_acount(user_name, line_or_star);
            cout << "\nenter acount's name to display options:                bress [back] to back to the main list\nenter [ma] to control your acount:\n";
            string choos_acount;
            cin >> choos_acount;
            while (!(choos_acount == "MOHAMMAD" || choos_acount == "mohammad" || choos_acount == "MAUADAH" || choos_acount == "mauadah" || choos_acount == "KING" || choos_acount == "king" || choos_acount == "NAURAS" || choos_acount == "nauras" || choos_acount == "NAGLAA" || choos_acount == "naglaa" || choos_acount == "AHMAD" || choos_acount == "ahmad" || choos_acount == "FOUR" || choos_acount == "four" || choos_acount == user_name || choos_acount == "back" || choos_acount == "Back" || choos_acount == "Ma" || choos_acount == "ma"))
            {
                cout << "sorry unknow code ...\n";
                cout << "enter acount's name to display options:                bress [back] to back to the main list\n";
                cin >> choos_acount;

            }
            cout << "\n---------------------------\n";
            if (choos_acount == "back" || choos_acount == "Back")
            {
                goto the_main_list;

            }
            else if (choos_acount == "MOHAMMAD" || choos_acount == "mohammad")
            {
            back_after_comment_mohammad_main1:
                internet_cookers.mohammed->show_share_mohammed_cook(shape_of_show, line_or_star);
                cout << "\n---------------------------\n";
                cout << "enter cook name to display it :                  bress [back] to back to the main list - [bb] to back one.\n";
                string show_the_cook;
                cin >> show_the_cook;
                while (!(show_the_cook == "Spiced" || show_the_cook == "spiced" || show_the_cook == "Sandwich" || show_the_cook == "sandwich" || show_the_cook == "Meat" || show_the_cook == "meat" || show_the_cook == "back" || show_the_cook == "Back" || show_the_cook == "bb" || show_the_cook == "Bb"))
                {
                    cout << "sorry this cook is not found ..tray again.\n";
                    cout << "enter cook name to display it :                  bress [back] to back to the main list - [bb] to back one.\n";
                    cin >> show_the_cook;

                }
                if (show_the_cook == "back" || show_the_cook == "Back")
                {
                    goto the_main_list;

                }
                else  if (show_the_cook == "bb" || show_the_cook == "Bb")
                {
                    goto place_bb_1;

                }
                else  if (show_the_cook == "Spiced" || show_the_cook == "spiced")
                {
                back_after_comment_mohammed1_1:
                    internet_cookers.mohammed->display_mohammed_part_1();
                    cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                    string show_comments;
                    cin >> show_comments;
                    while (!(show_comments == "sh" || show_comments == "Sh" || show_comments == "bb" || show_comments == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                        cin >> show_comments;
                    }
                    if (show_comments == "bb" || show_comments == "Bb")
                    {
                        goto back_after_comment_mohammad_main1;
                    }
                    if (show_comments == "sh" || show_comments == "Sh")
                    {
                        internet_cookers.mohammed->display_comments_mohammed_online_part_1();
                        cout << "brees [co] to add a comment:         [bb] to back one.\n";
                        string add_comment;
                        cin >> add_comment;
                        while (!(add_comment == "co" || add_comment == "Co" || add_comment == "bb" || add_comment == "Bb"))
                        {
                            cout << "sorry unknow code ...\n";
                            cout << "brees [co] to add a comment:         [bb] to back one.\n";
                            cin >> add_comment;

                        }
                        if (add_comment == "bb" || add_comment == "Bb")
                        {
                            goto back_after_comment_mohammed1_1;

                        }
                        else if (add_comment == "co" || add_comment == "Co")
                        {
                            internet_cookers.mohammed->add_new_comment_online_maohammed_part_1(user_name);
                            goto back_after_comment_mohammed1_1;
                        }
                    }
                }
                else  if (show_the_cook == "Sandwich" || show_the_cook == "sandwich")
                {
                back_after_comment_mohammed2_1:

                    internet_cookers.mohammed->display_mohammed_part_2();
                    cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                    string show_comments;
                    cin >> show_comments;
                    while (!(show_comments == "sh" || show_comments == "Sh" || show_comments == "bb" || show_comments == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                        cin >> show_comments;
                    }
                    if (show_comments == "bb" || show_comments == "Bb")
                    {
                        goto back_after_comment_mohammad_main1;
                    }
                    if (show_comments == "sh" || show_comments == "Sh")
                    {
                        internet_cookers.mohammed->display_comments_mohammed_online_part_2();
                        cout << "brees [co] to add a comment:         [bb] to back one.";
                        string add_comment;
                        cin >> add_comment;
                        while (!(add_comment == "co" || add_comment == "Co" || add_comment == "bb" || add_comment == "Bb"))
                        {
                            cout << "sorry unknow code ...\n";
                            cout << "brees [co] to add a comment:         [bb] to back one.";
                            cin >> add_comment;

                        }
                        if (add_comment == "bb" || add_comment == "Bb")
                        {
                            goto back_after_comment_mohammed2_1;

                        }
                        else if (add_comment == "co" || add_comment == "Co")
                        {
                            internet_cookers.mohammed->add_new_comment_online_maohammed_part_2(user_name);
                            goto back_after_comment_mohammed2_1;

                        }
                    }
                }
                else  if (show_the_cook == "Meat" || show_the_cook == "meat")
                {
                back_after_comment_mohammed3_1:
                    internet_cookers.mohammed->display_mohammed_part_3();
                    cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                    string show_comments;
                    cin >> show_comments;
                    while (!(show_comments == "sh" || show_comments == "Sh" || show_comments == "bb" || show_comments == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                        cin >> show_comments;
                    }
                    if (show_comments == "bb" || show_comments == "Bb")
                    {
                        goto back_after_comment_mohammad_main1;
                    }
                    if (show_comments == "sh" || show_comments == "Sh")
                    {
                        internet_cookers.mohammed->display_comments_mohammed_online_part_3();
                        cout << "brees [co] to add a comment:         [bb] to back one.";
                        string add_comment;
                        cin >> add_comment;
                        while (!(add_comment == "co" || add_comment == "Co" || add_comment == "bb" || add_comment == "Bb"))
                        {
                            cout << "sorry unknow code ...\n";
                            cout << "brees [co] to add a comment:         [bb] to back one.";
                            cin >> add_comment;

                        }
                        if (add_comment == "bb" || add_comment == "Bb")
                        {
                            goto back_after_comment_mohammed3_1;

                        }
                        else if (add_comment == "co" || add_comment == "Co")
                        {
                            internet_cookers.mohammed->add_new_comment_online_maohammed_part_3(user_name);
                            goto back_after_comment_mohammed3_1;
                        }
                    }
                }
            }
            else if (choos_acount == "MAUADAH" || choos_acount == "mauadah")
            {
            back_after_comment_mauadah_main1:
                internet_cookers.mauadah->show_share_mauadah_cook(shape_of_show, line_or_star);
                cout << "\n---------------------------\n";
                cout << "enter cook name to display it :                  bress [back] to back to the main list - [bb] to back one.\n";
                string show_the_cook;
                cin >> show_the_cook;
                while (!(show_the_cook == "Chicken" || show_the_cook == "chicken" || show_the_cook == "Baked" || show_the_cook == "baked" || show_the_cook == "Hot" || show_the_cook == "hot" || show_the_cook == "back" || show_the_cook == "Back" || show_the_cook == "bb" || show_the_cook == "Bb"))
                {
                    cout << "sorry this cook is not found ..tray again.\n";
                    cout << "enter cook name to display it :                  bress [back] to back to the main list - [bb] to back one.\n";
                    cin >> show_the_cook;

                }
                if (show_the_cook == "back" || show_the_cook == "Back")
                {
                    goto the_main_list;

                }
                else  if (show_the_cook == "bb" || show_the_cook == "Bb")
                {
                    goto place_bb_1;

                }
                else  if (show_the_cook == "Chicken" || show_the_cook == "chicken")
                {
                back_after_comment_mauadah1_1:
                    internet_cookers.mauadah->display_mauadah_part_1();
                    cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                    string show_comments;
                    cin >> show_comments;
                    while (!(show_comments == "sh" || show_comments == "Sh" || show_comments == "bb" || show_comments == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                        cin >> show_comments;
                    }
                    if (show_comments == "bb" || show_comments == "Bb")
                    {
                        goto back_after_comment_mauadah_main1;
                    }
                    if (show_comments == "sh" || show_comments == "Sh")
                    {
                        internet_cookers.mauadah->display_comments_mauadah_online_part_1();
                        cout << "brees [co] to add a comment:         [bb] to back one.\n";
                        string add_comment;
                        cin >> add_comment;
                        while (!(add_comment == "co" || add_comment == "Co" || add_comment == "bb" || add_comment == "Bb"))
                        {
                            cout << "sorry unknow code ...\n";
                            cout << "brees [co] to add a comment:         [bb] to back one.\n";
                            cin >> add_comment;

                        }
                        if (add_comment == "bb" || add_comment == "Bb")
                        {
                            goto back_after_comment_mauadah1_1;

                        }
                        else if (add_comment == "co" || add_comment == "Co")
                        {
                            internet_cookers.mauadah->add_new_comment_mauadah_online_part_1(user_name);
                            goto back_after_comment_mauadah1_1;
                        }
                    }
                }
                else  if (show_the_cook == "Baked" || show_the_cook == "baked")
                {
                back_after_comment_mauadah2_1:
                    internet_cookers.mauadah->display_mauadah_part_2();
                    cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                    string show_comments;
                    cin >> show_comments;
                    while (!(show_comments == "sh" || show_comments == "Sh" || show_comments == "bb" || show_comments == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                        cin >> show_comments;
                    }
                    if (show_comments == "bb" || show_comments == "Bb")
                    {
                        goto back_after_comment_mauadah_main1;
                    }
                    if (show_comments == "sh" || show_comments == "Sh")
                    {
                        internet_cookers.mauadah->display_comments_mauadah_online_part_2();
                        cout << "brees [co] to add a comment:         [bb] to back one.";
                        string add_comment;
                        cin >> add_comment;
                        while (!(add_comment == "co" || add_comment == "Co" || add_comment == "bb" || add_comment == "Bb"))
                        {
                            cout << "sorry unknow code ...\n";
                            cout << "brees [co] to add a comment:         [bb] to back one.";
                            cin >> add_comment;

                        }
                        if (add_comment == "bb" || add_comment == "Bb")
                        {
                            goto back_after_comment_mauadah2_1;

                        }
                        else if (add_comment == "co" || add_comment == "Co")
                        {
                            internet_cookers.mauadah->add_new_comment_mauadah_online_part_2(user_name);
                            goto back_after_comment_mauadah2_1;

                        }
                    }
                }
                else  if (show_the_cook == "Hot" || show_the_cook == "hot")
                {
                back_after_comment_mauadah3_1:
                    internet_cookers.mauadah->display_mauadah_part_3();
                    cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                    string show_comments;
                    cin >> show_comments;
                    while (!(show_comments == "sh" || show_comments == "Sh" || show_comments == "bb" || show_comments == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                        cin >> show_comments;
                    }
                    if (show_comments == "bb" || show_comments == "Bb")
                    {
                        goto back_after_comment_mauadah_main1;
                    }
                    if (show_comments == "sh" || show_comments == "Sh")
                    {
                        internet_cookers.mauadah->display_comments_mauadah_online_part_3();
                        cout << "brees [co] to add a comment:         [bb] to back one.";
                        string add_comment;
                        cin >> add_comment;
                        while (!(add_comment == "co" || add_comment == "Co" || add_comment == "bb" || add_comment == "Bb"))
                        {
                            cout << "sorry unknow code ...\n";
                            cout << "brees [co] to add a comment:         [bb] to back one.";
                            cin >> add_comment;

                        }
                        if (add_comment == "bb" || add_comment == "Bb")
                        {
                            goto back_after_comment_mauadah3_1;

                        }
                        else if (add_comment == "co" || add_comment == "Co")
                        {
                            internet_cookers.mauadah->add_new_comment_mauadah_online_part_3(user_name);
                            goto back_after_comment_mauadah3_1;
                        }
                    }
                }
            }
            else if (choos_acount == "KING" || choos_acount == "king")
            {
            back_after_comment_king_main1:
                internet_cookers.king->show_share_king_cook(shape_of_show, line_or_star);
                cout << "\n---------------------------\n";
                cout << "enter cook name to display it :                  bress [back] to back to the main list - [bb] to back one.\n";
                string show_the_cook;
                cin >> show_the_cook;
                while (!(show_the_cook == "Omelette" || show_the_cook == "omelette" || show_the_cook == "Fried" || show_the_cook == "fried" || show_the_cook == "Roasted" || show_the_cook == "roasted" || show_the_cook == "back" || show_the_cook == "Back" || show_the_cook == "bb" || show_the_cook == "Bb"))
                {
                    cout << "sorry this cook is not found ..tray again.\n";
                    cout << "enter cook name to display it :                  bress [back] to back to the main list - [bb] to back one.\n";
                    cin >> show_the_cook;

                }
                if (show_the_cook == "back" || show_the_cook == "Back")
                {
                    goto the_main_list;

                }
                else  if (show_the_cook == "bb" || show_the_cook == "Bb")
                {
                    goto place_bb_1;

                }
                else  if (show_the_cook == "Omelette" || show_the_cook == "omelette")
                {
                back_after_comment_king1_1:
                    internet_cookers.king->display_king_part_1();
                    cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                    string show_comments;
                    cin >> show_comments;
                    while (!(show_comments == "sh" || show_comments == "Sh" || show_comments == "bb" || show_comments == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                        cin >> show_comments;
                    }
                    if (show_comments == "bb" || show_comments == "Bb")
                    {
                        goto back_after_comment_king_main1;
                    }
                    if (show_comments == "sh" || show_comments == "Sh")
                    {
                        internet_cookers.king->display_comments_king_online_part_1();
                        cout << "brees [co] to add a comment:         [bb] to back one.\n";
                        string add_comment;
                        cin >> add_comment;
                        while (!(add_comment == "co" || add_comment == "Co" || add_comment == "bb" || add_comment == "Bb"))
                        {
                            cout << "sorry unknow code ...\n";
                            cout << "brees [co] to add a comment:         [bb] to back one.\n";
                            cin >> add_comment;

                        }
                        if (add_comment == "bb" || add_comment == "Bb")
                        {
                            goto back_after_comment_king1_1;

                        }
                        else if (add_comment == "co" || add_comment == "Co")
                        {
                            internet_cookers.king->add_new_comment_king_online_part_1(user_name);
                            goto back_after_comment_king1_1;
                        }
                    }
                }
                else  if (show_the_cook == "Fried" || show_the_cook == "fried")
                {
                back_after_comment_king2_1:
                    internet_cookers.king->display_king_part_2();
                    cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                    string show_comments;
                    cin >> show_comments;
                    while (!(show_comments == "sh" || show_comments == "Sh" || show_comments == "bb" || show_comments == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                        cin >> show_comments;
                    }
                    if (show_comments == "bb" || show_comments == "Bb")
                    {
                        goto back_after_comment_king_main1;
                    }
                    if (show_comments == "sh" || show_comments == "Sh")
                    {
                        internet_cookers.king->display_comments_king_online_part_2();
                        cout << "brees [co] to add a comment:         [bb] to back one.";
                        string add_comment;
                        cin >> add_comment;
                        while (!(add_comment == "co" || add_comment == "Co" || add_comment == "bb" || add_comment == "Bb"))
                        {
                            cout << "sorry unknow code ...\n";
                            cout << "brees [co] to add a comment:         [bb] to back one.";
                            cin >> add_comment;

                        }
                        if (add_comment == "bb" || add_comment == "Bb")
                        {
                            goto back_after_comment_king2_1;

                        }
                        else if (add_comment == "co" || add_comment == "Co")
                        {
                            internet_cookers.king->add_new_comment_king_online_part_2(user_name);
                            goto back_after_comment_king2_1;

                        }
                    }
                }
                else  if (show_the_cook == "Roasted" || show_the_cook == "roasted")
                {
                back_after_comment_king3_1:

                    internet_cookers.king->display_king_part_3();
                    cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                    string show_comments;
                    cin >> show_comments;
                    while (!(show_comments == "sh" || show_comments == "Sh" || show_comments == "bb" || show_comments == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                        cin >> show_comments;
                    }
                    if (show_comments == "bb" || show_comments == "Bb")
                    {
                        goto back_after_comment_king_main1;
                    }
                    if (show_comments == "sh" || show_comments == "Sh")
                    {
                        internet_cookers.king->display_comments_king_online_part_3();
                        cout << "brees [co] to add a comment:         [bb] to back one.";
                        string add_comment;
                        cin >> add_comment;
                        while (!(add_comment == "co" || add_comment == "Co" || add_comment == "bb" || add_comment == "Bb"))
                        {
                            cout << "sorry unknow code ...\n";
                            cout << "brees [co] to add a comment:         [bb] to back one.";
                            cin >> add_comment;

                        }
                        if (add_comment == "bb" || add_comment == "Bb")
                        {
                            goto back_after_comment_king3_1;

                        }
                        else if (add_comment == "co" || add_comment == "Co")
                        {
                            internet_cookers.king->add_new_comment_king_online_part_3(user_name);
                            goto back_after_comment_king3_1;
                        }
                    }
                }
            }
            else if (choos_acount == "NAURAS" || choos_acount == "nauras")
            {

            back_after_comment_nauras_main1:
                internet_cookers.nauras->show_share_nauras_cook(shape_of_show, line_or_star);
                cout << "\n---------------------------\n";
                cout << "enter cook name to display it :                  bress [back] to back to the main list - [bb] to back one.\n";
                string show_the_cook;
                cin >> show_the_cook;
                while (!(show_the_cook == "Boiled" || show_the_cook == "boiled" || show_the_cook == "Fruit" || show_the_cook == "fruit" || show_the_cook == "Toast" || show_the_cook == "toast" || show_the_cook == "back" || show_the_cook == "Back" || show_the_cook == "bb" || show_the_cook == "Bb"))
                {
                    cout << "sorry this cook is not found ..tray again.\n";
                    cout << "enter cook name to display it :                  bress [back] to back to the main list - [bb] to back one.\n";
                    cin >> show_the_cook;

                }
                if (show_the_cook == "back" || show_the_cook == "Back")
                {
                    goto the_main_list;

                }
                else  if (show_the_cook == "bb" || show_the_cook == "Bb")
                {
                    goto place_bb_1;

                }
                else  if (show_the_cook == "Boiled" || show_the_cook == "boiled")
                {
                back_after_comment_nauras1_1:
                    internet_cookers.nauras->display_nauras_part_1();
                    cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                    string show_comments;
                    cin >> show_comments;
                    while (!(show_comments == "sh" || show_comments == "Sh" || show_comments == "bb" || show_comments == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                        cin >> show_comments;
                    }
                    if (show_comments == "bb" || show_comments == "Bb")
                    {
                        goto back_after_comment_nauras_main1;
                    }
                    if (show_comments == "sh" || show_comments == "Sh")
                    {
                        internet_cookers.nauras->display_comments_nauras_online_part_1();
                        cout << "brees [co] to add a comment:         [bb] to back one.\n";
                        string add_comment;
                        cin >> add_comment;
                        while (!(add_comment == "co" || add_comment == "Co" || add_comment == "bb" || add_comment == "Bb"))
                        {
                            cout << "sorry unknow code ...\n";
                            cout << "brees [co] to add a comment:         [bb] to back one.\n";
                            cin >> add_comment;

                        }
                        if (add_comment == "bb" || add_comment == "Bb")
                        {
                            goto back_after_comment_nauras1_1;

                        }
                        else if (add_comment == "co" || add_comment == "Co")
                        {
                            internet_cookers.nauras->add_new_comment_nauras_online_part_1(user_name);
                            goto back_after_comment_nauras1_1;
                        }
                    }
                }
                else  if (show_the_cook == "Fruit" || show_the_cook == "fruit")
                {
                back_after_comment_nauras2_1:
                    internet_cookers.nauras->display_nauras_part_2();
                    cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                    string show_comments;
                    cin >> show_comments;
                    while (!(show_comments == "sh" || show_comments == "Sh" || show_comments == "bb" || show_comments == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                        cin >> show_comments;
                    }
                    if (show_comments == "bb" || show_comments == "Bb")
                    {
                        goto back_after_comment_nauras_main1;
                    }
                    if (show_comments == "sh" || show_comments == "Sh")
                    {
                        internet_cookers.nauras->display_comments_nauras_online_part_2();
                        cout << "brees [co] to add a comment:         [bb] to back one.";
                        string add_comment;
                        cin >> add_comment;
                        while (!(add_comment == "co" || add_comment == "Co" || add_comment == "bb" || add_comment == "Bb"))
                        {
                            cout << "sorry unknow code ...\n";
                            cout << "brees [co] to add a comment:         [bb] to back one.";
                            cin >> add_comment;

                        }
                        if (add_comment == "bb" || add_comment == "Bb")
                        {
                            goto back_after_comment_nauras2_1;

                        }
                        else if (add_comment == "co" || add_comment == "Co")
                        {
                            internet_cookers.nauras->add_new_comment_nauras_online_part_2(user_name);
                            goto back_after_comment_nauras2_1;

                        }
                    }
                }
                else  if (show_the_cook == "Toast" || show_the_cook == "toast")
                {
                back_after_comment_nauras3_1:
                    internet_cookers.nauras->display_nauras_part_3();
                    cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                    string show_comments;
                    cin >> show_comments;
                    while (!(show_comments == "sh" || show_comments == "Sh" || show_comments == "bb" || show_comments == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                        cin >> show_comments;
                    }
                    if (show_comments == "bb" || show_comments == "Bb")
                    {
                        goto back_after_comment_nauras_main1;
                    }
                    if (show_comments == "sh" || show_comments == "Sh")
                    {
                        internet_cookers.nauras->display_comments_nauras_online_part_3();
                        cout << "brees [co] to add a comment:         [bb] to back one.";
                        string add_comment;
                        cin >> add_comment;
                        while (!(add_comment == "co" || add_comment == "Co" || add_comment == "bb" || add_comment == "Bb"))
                        {
                            cout << "sorry unknow code ...\n";
                            cout << "brees [co] to add a comment:         [bb] to back one.";
                            cin >> add_comment;

                        }
                        if (add_comment == "bb" || add_comment == "Bb")
                        {
                            goto back_after_comment_nauras3_1;

                        }
                        else if (add_comment == "co" || add_comment == "Co")
                        {
                            internet_cookers.nauras->add_new_comment_nauras_online_part_3(user_name);
                            goto back_after_comment_nauras3_1;
                        }
                    }
                }
            }
            else if (choos_acount == "NAGLAA" || choos_acount == "naglaa")
            {
            back_after_comment_naglaa_main1:
                internet_cookers.naglaa->show_share_naglaa_cook(shape_of_show, line_or_star);
                cout << "\n---------------------------\n";
                cout << "enter cook name to display it :                  bress [back] to back to the main list - [bb] to back one.\n";
                string show_the_cook;
                cin >> show_the_cook;
                while (!(show_the_cook == "Coffee" || show_the_cook == "coffee" || show_the_cook == "Rice" || show_the_cook == "rice" || show_the_cook == "Cream" || show_the_cook == "cream" || show_the_cook == "back" || show_the_cook == "Back" || show_the_cook == "bb" || show_the_cook == "Bb"))
                {
                    cout << "sorry this cook is not found ..tray again.\n";
                    cout << "enter cook name to display it :                  bress [back] to back to the main list - [bb] to back one.\n";
                    cin >> show_the_cook;

                }
                if (show_the_cook == "back" || show_the_cook == "Back")
                {
                    goto the_main_list;

                }
                else  if (show_the_cook == "bb" || show_the_cook == "Bb")
                {
                    goto place_bb_1;

                }
                else  if (show_the_cook == "Coffee" || show_the_cook == "coffee")
                {
                back_after_comment_naglaa1_1:
                    internet_cookers.naglaa->display_naglaa_part_1();
                    cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                    string show_comments;
                    cin >> show_comments;
                    while (!(show_comments == "sh" || show_comments == "Sh" || show_comments == "bb" || show_comments == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                        cin >> show_comments;
                    }
                    if (show_comments == "bb" || show_comments == "Bb")
                    {
                        goto back_after_comment_naglaa_main1;
                    }
                    if (show_comments == "sh" || show_comments == "Sh")
                    {
                        internet_cookers.naglaa->display_comments_naglaa_online_part_1();
                        cout << "brees [co] to add a comment:         [bb] to back one.\n";
                        string add_comment;
                        cin >> add_comment;
                        while (!(add_comment == "co" || add_comment == "Co" || add_comment == "bb" || add_comment == "Bb"))
                        {
                            cout << "sorry unknow code ...\n";
                            cout << "brees [co] to add a comment:         [bb] to back one.\n";
                            cin >> add_comment;

                        }
                        if (add_comment == "bb" || add_comment == "Bb")
                        {
                            goto back_after_comment_naglaa1_1;

                        }
                        else if (add_comment == "co" || add_comment == "Co")
                        {
                            internet_cookers.naglaa->add_new_comment_naglaa_online_part_1(user_name);
                            goto back_after_comment_naglaa1_1;
                        }
                    }
                }
                else  if (show_the_cook == "Rice" || show_the_cook == "rice")
                {
                back_after_comment_naglaa2_1:
                    internet_cookers.naglaa->display_naglaa_part_2();
                    cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                    string show_comments;
                    cin >> show_comments;
                    while (!(show_comments == "sh" || show_comments == "Sh" || show_comments == "bb" || show_comments == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                        cin >> show_comments;
                    }
                    if (show_comments == "bb" || show_comments == "Bb")
                    {
                        goto back_after_comment_naglaa_main1;
                    }
                    if (show_comments == "sh" || show_comments == "Sh")
                    {
                        internet_cookers.naglaa->display_comments_naglaa_online_part_2();
                        cout << "brees [co] to add a comment:         [bb] to back one.";
                        string add_comment;
                        cin >> add_comment;
                        while (!(add_comment == "co" || add_comment == "Co" || add_comment == "bb" || add_comment == "Bb"))
                        {
                            cout << "sorry unknow code ...\n";
                            cout << "brees [co] to add a comment:         [bb] to back one.";
                            cin >> add_comment;

                        }
                        if (add_comment == "bb" || add_comment == "Bb")
                        {
                            goto back_after_comment_naglaa2_1;

                        }
                        else if (add_comment == "co" || add_comment == "Co")
                        {
                            internet_cookers.naglaa->add_new_comment_naglaa_online_part_2(user_name);
                            goto back_after_comment_naglaa2_1;

                        }
                    }
                }
                else  if (show_the_cook == "Cream" || show_the_cook == "cream")
                {
                back_after_comment_naglaa3_1:
                    internet_cookers.naglaa->display_naglaa_part_3();
                    cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                    string show_comments;
                    cin >> show_comments;
                    while (!(show_comments == "sh" || show_comments == "Sh" || show_comments == "bb" || show_comments == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                        cin >> show_comments;
                    }
                    if (show_comments == "bb" || show_comments == "Bb")
                    {
                        goto back_after_comment_naglaa_main1;
                    }
                    if (show_comments == "sh" || show_comments == "Sh")
                    {
                        internet_cookers.naglaa->display_comments_naglaa_online_part_3();
                        cout << "brees [co] to add a comment:         [bb] to back one.";
                        string add_comment;
                        cin >> add_comment;
                        while (!(add_comment == "co" || add_comment == "Co" || add_comment == "bb" || add_comment == "Bb"))
                        {
                            cout << "sorry unknow code ...\n";
                            cout << "brees [co] to add a comment:         [bb] to back one.";
                            cin >> add_comment;

                        }
                        if (add_comment == "bb" || add_comment == "Bb")
                        {
                            goto back_after_comment_naglaa3_1;

                        }
                        else if (add_comment == "co" || add_comment == "Co")
                        {
                            internet_cookers.naglaa->add_new_comment_naglaa_online_part_3(user_name);
                            goto back_after_comment_naglaa3_1;
                        }
                    }
                }
            }
            else if (choos_acount == "AHMAD" || choos_acount == "ahmad")
            {
            back_after_comment_ahmad_main1:
                internet_cookers.ahmad->show_share_ahmad_cook(shape_of_show, line_or_star);
                cout << "\n---------------------------\n";
                cout << "enter cook name to display it :                  bress [back] to back to the main list - [bb] to back one.\n";
                string show_the_cook;
                cin >> show_the_cook;
                while (!(show_the_cook == "Chicken" || show_the_cook == "chicken" || show_the_cook == "Baked" || show_the_cook == "baked" || show_the_cook == "Hot" || show_the_cook == "hot" || show_the_cook == "back" || show_the_cook == "Back" || show_the_cook == "bb" || show_the_cook == "Bb"))
                {
                    cout << "sorry this cook is not found ..tray again.\n";
                    cout << "enter cook name to display it :                  bress [back] to back to the main list - [bb] to back one.\n";
                    cin >> show_the_cook;

                }
                if (show_the_cook == "back" || show_the_cook == "Back")
                {
                    goto the_main_list;

                }
                else  if (show_the_cook == "bb" || show_the_cook == "Bb")
                {
                    goto place_bb_1;

                }
                else  if (show_the_cook == "Chicken" || show_the_cook == "chicken")
                {
                back_after_comment_ahmad1_1:
                    internet_cookers.ahmad->display_ahmad_part_1();
                    cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                    string show_comments;
                    cin >> show_comments;
                    while (!(show_comments == "sh" || show_comments == "Sh" || show_comments == "bb" || show_comments == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                        cin >> show_comments;
                    }
                    if (show_comments == "bb" || show_comments == "Bb")
                    {
                        goto back_after_comment_ahmad_main1;
                    }
                    if (show_comments == "sh" || show_comments == "Sh")
                    {
                        internet_cookers.ahmad->display_comments_ahmad_online_part_1();
                        cout << "brees [co] to add a comment:         [bb] to back one.\n";
                        string add_comment;
                        cin >> add_comment;
                        while (!(add_comment == "co" || add_comment == "Co" || add_comment == "bb" || add_comment == "Bb"))
                        {
                            cout << "sorry unknow code ...\n";
                            cout << "brees [co] to add a comment:         [bb] to back one.\n";
                            cin >> add_comment;

                        }
                        if (add_comment == "bb" || add_comment == "Bb")
                        {
                            goto back_after_comment_ahmad1_1;

                        }
                        else if (add_comment == "co" || add_comment == "Co")
                        {
                            internet_cookers.ahmad->add_new_comment_ahmad_online_part_1(user_name);
                            goto back_after_comment_ahmad1_1;
                        }
                    }
                }
                else  if (show_the_cook == "Baked" || show_the_cook == "baked")
                {
                back_after_comment_ahmad2_1:
                    internet_cookers.ahmad->display_ahmad_part_2();
                    cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                    string show_comments;
                    cin >> show_comments;
                    while (!(show_comments == "sh" || show_comments == "Sh" || show_comments == "bb" || show_comments == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                        cin >> show_comments;
                    }
                    if (show_comments == "bb" || show_comments == "Bb")
                    {
                        goto back_after_comment_ahmad_main1;
                    }
                    if (show_comments == "sh" || show_comments == "Sh")
                    {
                        internet_cookers.ahmad->display_comments_ahmad_online_part_2();
                        cout << "brees [co] to add a comment:         [bb] to back one.";
                        string add_comment;
                        cin >> add_comment;
                        while (!(add_comment == "co" || add_comment == "Co" || add_comment == "bb" || add_comment == "Bb"))
                        {
                            cout << "sorry unknow code ...\n";
                            cout << "brees [co] to add a comment:         [bb] to back one.";
                            cin >> add_comment;

                        }
                        if (add_comment == "bb" || add_comment == "Bb")
                        {
                            goto back_after_comment_ahmad2_1;

                        }
                        else if (add_comment == "co" || add_comment == "Co")
                        {
                            internet_cookers.ahmad->add_new_comment_ahmad_online_part_2(user_name);
                            goto back_after_comment_ahmad2_1;

                        }
                    }
                }
                else  if (show_the_cook == "Hot" || show_the_cook == "hot")
                {
                back_after_comment_ahmad3_1:
                    internet_cookers.ahmad->display_ahmad_part_3();
                    cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                    string show_comments;
                    cin >> show_comments;
                    while (!(show_comments == "sh" || show_comments == "Sh" || show_comments == "bb" || show_comments == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                        cin >> show_comments;
                    }
                    if (show_comments == "bb" || show_comments == "Bb")
                    {
                        goto back_after_comment_ahmad_main1;
                    }
                    if (show_comments == "sh" || show_comments == "Sh")
                    {
                        internet_cookers.ahmad->display_comments_ahmad_online_part_3();
                        cout << "brees [co] to add a comment:         [bb] to back one.";
                        string add_comment;
                        cin >> add_comment;
                        while (!(add_comment == "co" || add_comment == "Co" || add_comment == "bb" || add_comment == "Bb"))
                        {
                            cout << "sorry unknow code ...\n";
                            cout << "brees [co] to add a comment:         [bb] to back one.";
                            cin >> add_comment;

                        }
                        if (add_comment == "bb" || add_comment == "Bb")
                        {
                            goto back_after_comment_ahmad3_1;

                        }
                        else if (add_comment == "co" || add_comment == "Co")
                        {
                            internet_cookers.ahmad->add_new_comment_ahmad_online_part_3(user_name);
                            goto back_after_comment_ahmad3_1;
                        }
                    }
                }
            }
            else if (choos_acount == "Ma" || choos_acount == "ma")
            {
            back_control_acount1:
                if (m_s_int.a_new_cook_i_share_it == 0 || !(m_s_int.i_s_1.is_it_found_1 || m_s_int.i_s_2.is_it_found_2 || m_s_int.i_s_3.is_it_found_3))
                {
                    cout << "\n\n            YOU HAVE NOT ANY COOKS YET, BREES [add] TO ADD NEW\n            OR SERARCH IN ENTERNET.\n\n\n";

                }
                else if (m_s_int.a_new_cook_i_share_it > 0 || m_s_int.i_s_1.is_it_found_1 || m_s_int.i_s_2.is_it_found_2 || m_s_int.i_s_3.is_it_found_3)
                {

                    m_s_int.my_cook_show_share_name_of_my_cook(shape_of_show, line_or_star);
                }
                cout << "enter cook name to display it's list:               to back [bb] - [back] to the mainlist\nenter [ad] to add a new cook:\n";
                string cook_name_to_display_or_add;
                cin >> cook_name_to_display_or_add;
                m_s_int.if_cook_found_return(cook_name_to_display_or_add);
                while (!(cook_name_to_display_or_add == "bb" || cook_name_to_display_or_add == "Bb" || cook_name_to_display_or_add == "Back" || cook_name_to_display_or_add == "back" || cook_name_to_display_or_add == "ad" || cook_name_to_display_or_add == "Ad" || m_s_int.is_cook_found || ((cook_name_to_display_or_add == "Grilled" || cook_name_to_display_or_add == "grilled") && m_s_int.i_s_1.is_it_found_1) || ((cook_name_to_display_or_add == "Vegetable" || cook_name_to_display_or_add == "vegetable") && m_s_int.i_s_2.is_it_found_2) || ((cook_name_to_display_or_add == "Fruit" || cook_name_to_display_or_add == "fruit") && m_s_int.i_s_3.is_it_found_3)))
                {
                    cout << "unknow code ...tray again..\n";
                    cout << "enter cook name to display it's list:               to back [bb] - [back] to the mainlist\nenter [ad] to add a new cook:\n";
                    cin >> cook_name_to_display_or_add;
                    m_s_int.if_cook_found_return(cook_name_to_display_or_add);
                }
                if (cook_name_to_display_or_add == "bb" || cook_name_to_display_or_add == "Bb")
                {
                    goto place_bb_1;
                }
                else if (cook_name_to_display_or_add == "Back" || cook_name_to_display_or_add == "back")
                {
                    goto the_main_list;
                }
                else if (((cook_name_to_display_or_add == "Grilled" || cook_name_to_display_or_add == "grilled") && m_s_int.i_s_1.is_it_found_1))
                {
                    m_s_int.display_my_cook_online_new_acount_part_1();
                    cout << "\nprees [sh] to display comments:       [bb] to back\nprees [ra]to display rateo:\n";
                    string display_rate_the_cook;
                    cin >> display_rate_the_cook;
                    while (!(display_rate_the_cook == "bb" || display_rate_the_cook == "Bb" || display_rate_the_cook == "sh" || display_rate_the_cook == "Sh" || display_rate_the_cook == "ra" || display_rate_the_cook == "Ra"))
                    {
                        cout << "unknow code ...tray again..\n";
                        cout << "\nprees [sh] to display comments:       [bb] to back\nprees [ra]to display rateo:\n";
                        cin >> display_rate_the_cook;

                    }
                    if (display_rate_the_cook == "bb" || display_rate_the_cook == "Bb")
                    {
                        goto back_control_acount1;

                    }
                    else if (display_rate_the_cook == "ra" || display_rate_the_cook == "Ra")
                    {
                        m_s_int.rate_of_views_last_week_evaluation_1();
                        cout << "prees [bb] to back :\n";
                        string after_rate;
                        cin >> after_rate;
                        while (!(after_rate == "bb" || after_rate == "Bb"))
                        {
                            cout << "unknow code ...tray again..\n";
                            cout << "prees [bb] to back :\n";
                            cin >> after_rate;

                        }
                        if (after_rate == "bb" || after_rate == "Bb")
                        {
                            goto back_control_acount1;

                        }
                    }
                    else if (display_rate_the_cook == "sh" || display_rate_the_cook == "Sh")
                    {
                        m_s_int.display_comments_my_cook_online_part_1();
                        cout << "prees [bb] to back :\n";
                        string after_show;
                        cin >> after_show;
                        while (!(after_show == "bb" || after_show == "Bb"))
                        {
                            cout << "unknow code ...tray again..\n";
                            cout << "prees [bb] to back :\n";
                            cin >> after_show;

                        }
                        if (after_show == "bb" || after_show == "Bb")
                        {
                            goto back_control_acount1;

                        }
                    }
                }
                else if (((cook_name_to_display_or_add == "Vegetable" || cook_name_to_display_or_add == "vegetable") && m_s_int.i_s_2.is_it_found_2))
                {
                    m_s_int.display_my_cook_online_new_acount_part_2();
                    cout << "\nprees [sh] to display comments:       [bb] to back\nprees [ra]to display rateo:\n";
                    string display_rate_the_cook;
                    cin >> display_rate_the_cook;
                    while (!(display_rate_the_cook == "bb" || display_rate_the_cook == "Bb" || display_rate_the_cook == "sh" || display_rate_the_cook == "Sh" || display_rate_the_cook == "ra" || display_rate_the_cook == "Ra"))
                    {
                        cout << "unknow code ...tray again..\n";
                        cout << "\nprees [sh] to display comments:       [bb] to back\nprees [ra]to display rateo:\n";
                        cin >> display_rate_the_cook;

                    }
                    if (display_rate_the_cook == "bb" || display_rate_the_cook == "Bb")
                    {
                        goto back_control_acount1;

                    }
                    else if (display_rate_the_cook == "ra" || display_rate_the_cook == "Ra")
                    {
                        m_s_int.rate_of_views_last_week_evaluation_2();
                        cout << "prees [bb] to back :\n";
                        string after_rate;
                        cin >> after_rate;
                        while (!(after_rate == "bb" || after_rate == "Bb"))
                        {
                            cout << "unknow code ...tray again..\n";
                            cout << "prees [bb] to back :\n";
                            cin >> after_rate;

                        }
                        if (after_rate == "bb" || after_rate == "Bb")
                        {
                            goto back_control_acount1;

                        }
                    }
                    else if (((cook_name_to_display_or_add == "Fruit" || cook_name_to_display_or_add == "fruit") && m_s_int.i_s_3.is_it_found_3))
                    {
                        m_s_int.display_my_cook_online_new_acount_part_3();
                        cout << "\nprees [sh] to display comments:       [bb] to back\nprees [ra]to display rateo:\n";
                        string display_rate_the_cook;
                        cin >> display_rate_the_cook;
                        while (!(display_rate_the_cook == "bb" || display_rate_the_cook == "Bb" || display_rate_the_cook == "sh" || display_rate_the_cook == "Sh" || display_rate_the_cook == "ra" || display_rate_the_cook == "Ra"))
                        {
                            cout << "unknow code ...tray again..\n";
                            cout << "\nprees [sh] to display comments:       [bb] to back\nprees [ra]to display rateo:\n";
                            cin >> display_rate_the_cook;

                        }
                        if (display_rate_the_cook == "bb" || display_rate_the_cook == "Bb")
                        {
                            goto back_control_acount1;

                        }
                        else if (display_rate_the_cook == "ra" || display_rate_the_cook == "Ra")
                        {
                            m_s_int.rate_of_views_last_week_evaluation_3();
                            cout << "prees [bb] to back :\n";
                            string after_rate;
                            cin >> after_rate;
                            while (!(after_rate == "bb" || after_rate == "Bb"))
                            {
                                cout << "unknow code ...tray again..\n";
                                cout << "prees [bb] to back :\n";
                                cin >> after_rate;

                            }
                            if (after_rate == "bb" || after_rate == "Bb")
                            {
                                goto back_control_acount1;

                            }
                        }
                        else if (display_rate_the_cook == "sh" || display_rate_the_cook == "Sh")
                        {
                            m_s_int.display_comments_my_cook_online_part_3();
                            cout << "prees [bb] to back :\n";
                            string after_show;
                            cin >> after_show;
                            while (!(after_show == "bb" || after_show == "Bb"))
                            {
                                cout << "unknow code ...tray again..\n";
                                cout << "prees [bb] to back :\n";
                                cin >> after_show;

                            }
                            if (after_show == "bb" || after_show == "Bb")
                            {
                                goto back_control_acount1;

                            }
                        }
                    }
                    else if (display_rate_the_cook == "sh" || display_rate_the_cook == "Sh")
                    {
                        m_s_int.display_comments_my_cook_online_part_3();
                        cout << "prees [bb] to back :\n";
                        string after_show;
                        cin >> after_show;
                        while (!(after_show == "bb" || after_show == "Bb"))
                        {
                            cout << "unknow code ...tray again..\n";
                            cout << "prees [bb] to back :\n";
                            cin >> after_show;

                        }
                        if (after_show == "bb" || after_show == "Bb")
                        {
                            goto back_control_acount1;

                        }
                    }
                }
                else if (cook_name_to_display_or_add == "Ad" || cook_name_to_display_or_add == "ad")
                {
                    m_s_int.the_new_cook_in_internet();
                    cout << "prees [bb] to back :\n";
                    string after_add_cook;
                    cin >> after_add_cook;
                    while (!(after_add_cook == "bb" || after_add_cook == "Bb"))
                    {
                        cout << "unknow code ...tray again..\n";
                        cout << "prees [bb] to back :\n";
                        cin >> after_add_cook;

                    }
                    if (after_add_cook == "bb" || after_add_cook == "Bb")
                    {
                        goto back_control_acount1;

                    }

                }
                else if (m_s_int.is_cook_found)
                {
                    m_s_int.display_comments_my_cook_online_the_new_cook(cook_name_to_display_or_add);
                    cout << "\n-----------------------\n";
                    cout << "prees [sh] to show the comments:          [bb] to back one\nprees [ra] to display it's rate:\n";
                    string display_rate_the_new_cook;
                    cin >> display_rate_the_new_cook;
                    while (!(display_rate_the_new_cook == "bb" || display_rate_the_new_cook == "Bb" || display_rate_the_new_cook == "sh" || display_rate_the_new_cook == "Sh" || display_rate_the_new_cook == "ra" || display_rate_the_new_cook == "Ra"))
                    {
                        cout << "unknow code ...tray again..\n";
                        cout << "prees [sh] to show the comments:          [bb] to back one\nprees [ra] to display it's rate:\n";
                        cin >> display_rate_the_new_cook;

                    }
                    if (display_rate_the_new_cook == "bb" || display_rate_the_new_cook == "Bb")
                    {
                        goto back_control_acount1;
                    }
                    else if (display_rate_the_new_cook == "ra" || display_rate_the_new_cook == "Ra")
                    {
                        m_s_int.rate_of_views_last_week_evaluation_the_new_cook(cook_name_to_display_or_add);
                        cout << "prees [bb] to back :\n";
                        string after_rate;
                        cin >> after_rate;
                        while (!(after_rate == "bb" || after_rate == "Bb"))
                        {
                            cout << "unknow code ...tray again..\n";
                            cout << "prees [bb] to back :\n";
                            cin >> after_rate;

                        }
                        if (after_rate == "bb" || after_rate == "Bb")
                        {
                            goto back_control_acount1;

                        }
                    }
                    else if (display_rate_the_new_cook == "sh" || display_rate_the_new_cook == "Sh")
                    {
                        m_s_int.display_comments_my_cook_online_the_new_cook(cook_name_to_display_or_add);
                        cout << "prees [bb] to back :\n";
                        string after_show;
                        cin >> after_show;
                        while (!(after_show == "bb" || after_show == "Bb"))
                        {
                            cout << "unknow code ...tray again..\n";
                            cout << "prees [bb] to back :\n";
                            cin >> after_show;

                        }
                        if (after_show == "bb" || after_show == "Bb")
                        {
                            goto back_control_acount1;

                        }
                    }

                }
            }
        }
    }
    if (!(user_name == "a" && passowrd == "b"))
    {
        cout << "---------------------------------------\n";
        if (choos == "mc" || choos == "Mc")
        {
        back_main_own_cook_new_acount:
            if (!(mc.how_many_new_cook_in_main > 0))
            {
                cout << "\n\n            YOU HAVE NOT ANY COOKS YET, BREES [add] TO ADD NEW\n            OR SERARCH IN ENTERNET.\n\n\n";
            }
            if (mc.how_many_new_cook_in_main > 0)
            {
                mc.if_acount_new_show_new_cooks(shape_of_show, line_or_star);
            }
            cout << "enter cook name to display it's list:               to back [back]\nenter [ad] to add a new cook:\n";
            string cook_name_to_display_or_add;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            getline(cin, cook_name_to_display_or_add);
            //cin >> cook_name_to_display_or_add;
            while (cook_name_to_display_or_add.empty())
            {
                cout << "entering can not be empty....tray again\n";
                cout << "enter cook name to display it's list:               to back [back]\nenter [ad] to add a new cook:\n";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                getline(cin, cook_name_to_display_or_add);
            }
            mc.if_cook_found_return(cook_name_to_display_or_add);
            while (!(cook_name_to_display_or_add == "ad" || cook_name_to_display_or_add == "Ad" || cook_name_to_display_or_add == "Back" || cook_name_to_display_or_add == "back" || mc.is_cook_found))
            {
                cout << "sorry unknow code...\n";
                cout << "enter cook name to display it's list:               to back [back]\nenter [ad] to add a new cook:\n";
                cin.clear();
                //cin.ignore(numeric_limits<streamsize>::max(), '\n');
                getline(cin, cook_name_to_display_or_add);
                //cin >> cook_name_to_display_or_add;
                while (cook_name_to_display_or_add.empty())
                {
                    cout << "entering can not be empty....tray again\n";
                    cout << "enter cook name to display it's list:               to back [back]\nenter [ad] to add a new cook:\n";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    getline(cin, cook_name_to_display_or_add);
                }
                mc.if_cook_found_return(cook_name_to_display_or_add);
            }
            if (cook_name_to_display_or_add == "ad" || cook_name_to_display_or_add == "Ad")
            {
                mc.the_new_cook_in_main();
                cout << "\nbress [bb] to back one - [back] to back to the main list:\n";
                string must_be_back;
                cin >> must_be_back;
                while (true)
                {
                    if (must_be_back == "bb" || must_be_back == "Bb")
                    {
                        goto back_main_own_cook_new_acount;
                    }
                    if (must_be_back == "back" || must_be_back == "Back")
                    {
                        goto the_main_list;
                    }
                    cout << "unknow code..\n";
                    cout << "\nbress [bb] to back one - [back] to back to the main list:\n";
                    cin >> must_be_back;

                }

            }
            else if (cook_name_to_display_or_add == "Back" || cook_name_to_display_or_add == "back")
            {
                goto the_main_list;
            }
            if (mc.is_cook_found)
            {
                mc.display_a_new_cook_with_a_new_acount(cook_name_to_display_or_add);
                cout << "\nbress [bb] to back one - [back to back to the main list:\n";
                string must_be_back;
                cin >> must_be_back;
                while (true)
                {
                    if (must_be_back == "bb" || must_be_back == "Bb")
                    {
                        goto back_main_own_cook_new_acount;
                    }
                    if (must_be_back == "back" || must_be_back == "Back")
                    {
                        goto the_main_list;
                    }
                    cout << "unknow code..\n";
                    cout << "\nbress [bb] to back one - [back to back to the main list:\n";
                    cin >> must_be_back;

                }
            }

        }

        if (choos == "oc" || choos == "Oc")
        {
            cout << "pleass write your passowrd again:           bress [back] to back to the main list\n";
            string passowrd_again;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            getline(cin, passowrd_again);
            while (!(passowrd_again == passowrd || passowrd_again == "back" || passowrd_again == "Back"))
            {
                cout << "wroing passowrd....tray again.\n";
                cout << "pleass write your passowrd again:           bress [back] to back to the main list\n";
                getline(cin, passowrd_again);
            }
            if (passowrd_again == "back" || passowrd_again == "Back")
            {
                goto the_main_list;

            }
        place_bb_2:
            internet_cookers.display_names_new_acount(user_name, line_or_star);
            cout << "\nenter acount's name to display options:                bress [back] to back to the main list\nenter [ma] to control your acount:\n";
            string choos_acount;
            cin >> choos_acount;
            while (!(choos_acount == "MOHAMMAD" || choos_acount == "mohammad" || choos_acount == "MAUADAH" || choos_acount == "mauadah" || choos_acount == "KING" || choos_acount == "king" || choos_acount == "NAURAS" || choos_acount == "nauras" || choos_acount == "NAGLAA" || choos_acount == "naglaa" || choos_acount == "AHMAD" || choos_acount == "ahmad" || choos_acount == "FOUR" || choos_acount == "four" || choos_acount == user_name || choos_acount == "back" || choos_acount == "Back" || choos_acount == "Ma" || choos_acount == "ma"))
            {
                cout << "sorry unknow code ...\n";
                cout << "enter acount's name to display options:                bress [back] to back to the main list\n";
                cin >> choos_acount;

            }
            cout << "\n---------------------------\n";
            if (choos_acount == "back" || choos_acount == "Back")
            {
                goto the_main_list;

            }
            else if (choos_acount == "MOHAMMAD" || choos_acount == "mohammad")
            {
            back_after_comment_mohammad_main:
                internet_cookers.mohammed->show_share_mohammed_cook(shape_of_show, line_or_star);
                cout << "\n---------------------------\n";
                cout << "enter cook name to display it :                  bress [back] to back to the main list - [bb] to back one.\n";
                string show_the_cook;
                cin >> show_the_cook;
                while (!(show_the_cook == "Spiced" || show_the_cook == "spiced" || show_the_cook == "Sandwich" || show_the_cook == "sandwich" || show_the_cook == "Meat" || show_the_cook == "meat" || show_the_cook == "back" || show_the_cook == "Back" || show_the_cook == "bb" || show_the_cook == "Bb"))
                {
                    cout << "sorry this cook is not found ..tray again.\n";
                    cout << "enter cook name to display it :                  bress [back] to back to the main list - [bb] to back one.\n";
                    cin >> show_the_cook;

                }
                if (show_the_cook == "back" || show_the_cook == "Back")
                {
                    goto the_main_list;

                }
                else  if (show_the_cook == "bb" || show_the_cook == "Bb")
                {
                    goto place_bb_2;

                }
                else  if (show_the_cook == "Spiced" || show_the_cook == "spiced")
                {
                back_after_comment_mohammed1:
                    internet_cookers.mohammed->display_mohammed_part_1();
                    cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                    string show_comments;
                    cin >> show_comments;
                    while (!(show_comments == "sh" || show_comments == "Sh" || show_comments == "bb" || show_comments == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                        cin >> show_comments;
                    }
                    if (show_comments == "bb" || show_comments == "Bb")
                    {
                        goto back_after_comment_mohammad_main;
                    }
                    if (show_comments == "sh" || show_comments == "Sh")
                    {
                        internet_cookers.mohammed->display_comments_mohammed_online_part_1();
                        cout << "brees [co] to add a comment:         [bb] to back one.\n";
                        string add_comment;
                        cin >> add_comment;
                        while (!(add_comment == "co" || add_comment == "Co" || add_comment == "bb" || add_comment == "Bb"))
                        {
                            cout << "sorry unknow code ...\n";
                            cout << "brees [co] to add a comment:         [bb] to back one.\n";
                            cin >> add_comment;

                        }
                        if (add_comment == "bb" || add_comment == "Bb")
                        {
                            goto back_after_comment_mohammed1;

                        }
                        else if (add_comment == "co" || add_comment == "Co")
                        {
                            internet_cookers.mohammed->add_new_comment_online_maohammed_part_1(user_name);
                            goto back_after_comment_mohammed1;
                        }
                    }
                }
                else  if (show_the_cook == "Sandwich" || show_the_cook == "sandwich")
                {
                back_after_comment_mohammed2:

                    internet_cookers.mohammed->display_mohammed_part_2();
                    cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                    string show_comments;
                    cin >> show_comments;
                    while (!(show_comments == "sh" || show_comments == "Sh" || show_comments == "bb" || show_comments == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                        cin >> show_comments;
                    }
                    if (show_comments == "bb" || show_comments == "Bb")
                    {
                        goto back_after_comment_mohammad_main;
                    }
                    if (show_comments == "sh" || show_comments == "Sh")
                    {
                        internet_cookers.mohammed->display_comments_mohammed_online_part_2();
                        cout << "brees [co] to add a comment:         [bb] to back one.";
                        string add_comment;
                        cin >> add_comment;
                        while (!(add_comment == "co" || add_comment == "Co" || add_comment == "bb" || add_comment == "Bb"))
                        {
                            cout << "sorry unknow code ...\n";
                            cout << "brees [co] to add a comment:         [bb] to back one.";
                            cin >> add_comment;

                        }
                        if (add_comment == "bb" || add_comment == "Bb")
                        {
                            goto back_after_comment_mohammed2;

                        }
                        else if (add_comment == "co" || add_comment == "Co")
                        {
                            internet_cookers.mohammed->add_new_comment_online_maohammed_part_2(user_name);
                            goto back_after_comment_mohammed2;

                        }
                    }
                }
                else  if (show_the_cook == "Meat" || show_the_cook == "meat")
                {
                back_after_comment_mohammed3:
                    internet_cookers.mohammed->display_mohammed_part_3();
                    cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                    string show_comments;
                    cin >> show_comments;
                    while (!(show_comments == "sh" || show_comments == "Sh" || show_comments == "bb" || show_comments == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                        cin >> show_comments;
                    }
                    if (show_comments == "bb" || show_comments == "Bb")
                    {
                        goto back_after_comment_mohammad_main;
                    }
                    if (show_comments == "sh" || show_comments == "Sh")
                    {
                        internet_cookers.mohammed->display_comments_mohammed_online_part_3();
                        cout << "brees [co] to add a comment:         [bb] to back one.";
                        string add_comment;
                        cin >> add_comment;
                        while (!(add_comment == "co" || add_comment == "Co" || add_comment == "bb" || add_comment == "Bb"))
                        {
                            cout << "sorry unknow code ...\n";
                            cout << "brees [co] to add a comment:         [bb] to back one.";
                            cin >> add_comment;

                        }
                        if (add_comment == "bb" || add_comment == "Bb")
                        {
                            goto back_after_comment_mohammed3;

                        }
                        else if (add_comment == "co" || add_comment == "Co")
                        {
                            internet_cookers.mohammed->add_new_comment_online_maohammed_part_3(user_name);
                            goto back_after_comment_mohammed3;
                        }
                    }
                }
            }
            else if (choos_acount == "MAUADAH" || choos_acount == "mauadah")
            {
            back_after_comment_mauadah_main:
                internet_cookers.mauadah->show_share_mauadah_cook(shape_of_show, line_or_star);
                cout << "\n---------------------------\n";
                cout << "enter cook name to display it :                  bress [back] to back to the main list - [bb] to back one.\n";
                string show_the_cook;
                cin >> show_the_cook;
                while (!(show_the_cook == "Chicken" || show_the_cook == "chicken" || show_the_cook == "Baked" || show_the_cook == "baked" || show_the_cook == "Hot" || show_the_cook == "hot" || show_the_cook == "back" || show_the_cook == "Back" || show_the_cook == "bb" || show_the_cook == "Bb"))
                {
                    cout << "sorry this cook is not found ..tray again.\n";
                    cout << "enter cook name to display it :                  bress [back] to back to the main list - [bb] to back one.\n";
                    cin >> show_the_cook;

                }
                if (show_the_cook == "back" || show_the_cook == "Back")
                {
                    goto the_main_list;

                }
                else  if (show_the_cook == "bb" || show_the_cook == "Bb")
                {
                    goto place_bb_2;

                }
                else  if (show_the_cook == "Chicken" || show_the_cook == "chicken")
                {
                back_after_comment_mauadah1:
                    internet_cookers.mauadah->display_mauadah_part_1();
                    cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                    string show_comments;
                    cin >> show_comments;
                    while (!(show_comments == "sh" || show_comments == "Sh" || show_comments == "bb" || show_comments == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                        cin >> show_comments;
                    }
                    if (show_comments == "bb" || show_comments == "Bb")
                    {
                        goto back_after_comment_mauadah_main;
                    }
                    if (show_comments == "sh" || show_comments == "Sh")
                    {
                        internet_cookers.mauadah->display_comments_mauadah_online_part_1();
                        cout << "brees [co] to add a comment:         [bb] to back one.\n";
                        string add_comment;
                        cin >> add_comment;
                        while (!(add_comment == "co" || add_comment == "Co" || add_comment == "bb" || add_comment == "Bb"))
                        {
                            cout << "sorry unknow code ...\n";
                            cout << "brees [co] to add a comment:         [bb] to back one.\n";
                            cin >> add_comment;

                        }
                        if (add_comment == "bb" || add_comment == "Bb")
                        {
                            goto back_after_comment_mauadah1;

                        }
                        else if (add_comment == "co" || add_comment == "Co")
                        {
                            internet_cookers.mauadah->add_new_comment_mauadah_online_part_1(user_name);
                            goto back_after_comment_mauadah1;
                        }
                    }
                }
                else  if (show_the_cook == "Baked" || show_the_cook == "baked")
                {
                back_after_comment_mauadah2:
                    internet_cookers.mauadah->display_mauadah_part_2();
                    cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                    string show_comments;
                    cin >> show_comments;
                    while (!(show_comments == "sh" || show_comments == "Sh" || show_comments == "bb" || show_comments == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                        cin >> show_comments;
                    }
                    if (show_comments == "bb" || show_comments == "Bb")
                    {
                        goto back_after_comment_mauadah_main;
                    }
                    if (show_comments == "sh" || show_comments == "Sh")
                    {
                        internet_cookers.mauadah->display_comments_mauadah_online_part_2();
                        cout << "brees [co] to add a comment:         [bb] to back one.";
                        string add_comment;
                        cin >> add_comment;
                        while (!(add_comment == "co" || add_comment == "Co" || add_comment == "bb" || add_comment == "Bb"))
                        {
                            cout << "sorry unknow code ...\n";
                            cout << "brees [co] to add a comment:         [bb] to back one.";
                            cin >> add_comment;

                        }
                        if (add_comment == "bb" || add_comment == "Bb")
                        {
                            goto back_after_comment_mauadah2;

                        }
                        else if (add_comment == "co" || add_comment == "Co")
                        {
                            internet_cookers.mauadah->add_new_comment_mauadah_online_part_2(user_name);
                            goto back_after_comment_mauadah2;

                        }
                    }
                }
                else  if (show_the_cook == "Hot" || show_the_cook == "hot")
                {
                back_after_comment_mauadah3:
                    internet_cookers.mauadah->display_mauadah_part_3();
                    cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                    string show_comments;
                    cin >> show_comments;
                    while (!(show_comments == "sh" || show_comments == "Sh" || show_comments == "bb" || show_comments == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                        cin >> show_comments;
                    }
                    if (show_comments == "bb" || show_comments == "Bb")
                    {
                        goto back_after_comment_mauadah_main;
                    }
                    if (show_comments == "sh" || show_comments == "Sh")
                    {
                        internet_cookers.mauadah->display_comments_mauadah_online_part_3();
                        cout << "brees [co] to add a comment:         [bb] to back one.";
                        string add_comment;
                        cin >> add_comment;
                        while (!(add_comment == "co" || add_comment == "Co" || add_comment == "bb" || add_comment == "Bb"))
                        {
                            cout << "sorry unknow code ...\n";
                            cout << "brees [co] to add a comment:         [bb] to back one.";
                            cin >> add_comment;

                        }
                        if (add_comment == "bb" || add_comment == "Bb")
                        {
                            goto back_after_comment_mauadah3;

                        }
                        else if (add_comment == "co" || add_comment == "Co")
                        {
                            internet_cookers.mauadah->add_new_comment_mauadah_online_part_3(user_name);
                            goto back_after_comment_mauadah3;
                        }
                    }
                }
            }
            else if (choos_acount == "KING" || choos_acount == "king")
            {
            back_after_comment_king_main:
                internet_cookers.king->show_share_king_cook(shape_of_show, line_or_star);
                cout << "\n---------------------------\n";
                cout << "enter cook name to display it :                  bress [back] to back to the main list - [bb] to back one.\n";
                string show_the_cook;
                cin >> show_the_cook;
                while (!(show_the_cook == "Omelette" || show_the_cook == "omelette" || show_the_cook == "Fried" || show_the_cook == "fried" || show_the_cook == "Roasted" || show_the_cook == "roasted" || show_the_cook == "back" || show_the_cook == "Back" || show_the_cook == "bb" || show_the_cook == "Bb"))
                {
                    cout << "sorry this cook is not found ..tray again.\n";
                    cout << "enter cook name to display it :                  bress [back] to back to the main list - [bb] to back one.\n";
                    cin >> show_the_cook;

                }
                if (show_the_cook == "back" || show_the_cook == "Back")
                {
                    goto the_main_list;

                }
                else  if (show_the_cook == "bb" || show_the_cook == "Bb")
                {
                    goto place_bb_2;

                }
                else  if (show_the_cook == "Omelette" || show_the_cook == "omelette")
                {
                back_after_comment_king1:
                    internet_cookers.king->display_king_part_1();
                    cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                    string show_comments;
                    cin >> show_comments;
                    while (!(show_comments == "sh" || show_comments == "Sh" || show_comments == "bb" || show_comments == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                        cin >> show_comments;
                    }
                    if (show_comments == "bb" || show_comments == "Bb")
                    {
                        goto back_after_comment_king_main;
                    }
                    if (show_comments == "sh" || show_comments == "Sh")
                    {
                        internet_cookers.king->display_comments_king_online_part_1();
                        cout << "brees [co] to add a comment:         [bb] to back one.\n";
                        string add_comment;
                        cin >> add_comment;
                        while (!(add_comment == "co" || add_comment == "Co" || add_comment == "bb" || add_comment == "Bb"))
                        {
                            cout << "sorry unknow code ...\n";
                            cout << "brees [co] to add a comment:         [bb] to back one.\n";
                            cin >> add_comment;

                        }
                        if (add_comment == "bb" || add_comment == "Bb")
                        {
                            goto back_after_comment_king1;

                        }
                        else if (add_comment == "co" || add_comment == "Co")
                        {
                            internet_cookers.king->add_new_comment_king_online_part_1(user_name);
                            goto back_after_comment_king1;
                        }
                    }
                }
                else  if (show_the_cook == "Fried" || show_the_cook == "fried")
                {
                back_after_comment_king2:
                    internet_cookers.king->display_king_part_2();
                    cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                    string show_comments;
                    cin >> show_comments;
                    while (!(show_comments == "sh" || show_comments == "Sh" || show_comments == "bb" || show_comments == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                        cin >> show_comments;
                    }
                    if (show_comments == "bb" || show_comments == "Bb")
                    {
                        goto back_after_comment_king_main;
                    }
                    if (show_comments == "sh" || show_comments == "Sh")
                    {
                        internet_cookers.king->display_comments_king_online_part_2();
                        cout << "brees [co] to add a comment:         [bb] to back one.";
                        string add_comment;
                        cin >> add_comment;
                        while (!(add_comment == "co" || add_comment == "Co" || add_comment == "bb" || add_comment == "Bb"))
                        {
                            cout << "sorry unknow code ...\n";
                            cout << "brees [co] to add a comment:         [bb] to back one.";
                            cin >> add_comment;

                        }
                        if (add_comment == "bb" || add_comment == "Bb")
                        {
                            goto back_after_comment_king2;

                        }
                        else if (add_comment == "co" || add_comment == "Co")
                        {
                            internet_cookers.king->add_new_comment_king_online_part_2(user_name);
                            goto back_after_comment_king2;

                        }
                    }
                }
                else  if (show_the_cook == "Roasted" || show_the_cook == "roasted")
                {
                back_after_comment_king3:

                    internet_cookers.king->display_king_part_3();
                    cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                    string show_comments;
                    cin >> show_comments;
                    while (!(show_comments == "sh" || show_comments == "Sh" || show_comments == "bb" || show_comments == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                        cin >> show_comments;
                    }
                    if (show_comments == "bb" || show_comments == "Bb")
                    {
                        goto back_after_comment_king_main;
                    }
                    if (show_comments == "sh" || show_comments == "Sh")
                    {
                        internet_cookers.king->display_comments_king_online_part_3();
                        cout << "brees [co] to add a comment:         [bb] to back one.";
                        string add_comment;
                        cin >> add_comment;
                        while (!(add_comment == "co" || add_comment == "Co" || add_comment == "bb" || add_comment == "Bb"))
                        {
                            cout << "sorry unknow code ...\n";
                            cout << "brees [co] to add a comment:         [bb] to back one.";
                            cin >> add_comment;

                        }
                        if (add_comment == "bb" || add_comment == "Bb")
                        {
                            goto back_after_comment_king3;

                        }
                        else if (add_comment == "co" || add_comment == "Co")
                        {
                            internet_cookers.king->add_new_comment_king_online_part_3(user_name);
                            goto back_after_comment_king3;
                        }
                    }
                }
            }
            else if (choos_acount == "NAURAS" || choos_acount == "nauras")
            {

            back_after_comment_nauras_main:
                internet_cookers.nauras->show_share_nauras_cook(shape_of_show, line_or_star);
                cout << "\n---------------------------\n";
                cout << "enter cook name to display it :                  bress [back] to back to the main list - [bb] to back one.\n";
                string show_the_cook;
                cin >> show_the_cook;
                while (!(show_the_cook == "Boiled" || show_the_cook == "boiled" || show_the_cook == "Fruit" || show_the_cook == "fruit" || show_the_cook == "Toast" || show_the_cook == "toast" || show_the_cook == "back" || show_the_cook == "Back" || show_the_cook == "bb" || show_the_cook == "Bb"))
                {
                    cout << "sorry this cook is not found ..tray again.\n";
                    cout << "enter cook name to display it :                  bress [back] to back to the main list - [bb] to back one.\n";
                    cin >> show_the_cook;

                }
                if (show_the_cook == "back" || show_the_cook == "Back")
                {
                    goto the_main_list;

                }
                else  if (show_the_cook == "bb" || show_the_cook == "Bb")
                {
                    goto place_bb_2;

                }
                else  if (show_the_cook == "Boiled" || show_the_cook == "boiled")
                {
                back_after_comment_nauras1:
                    internet_cookers.nauras->display_nauras_part_1();
                    cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                    string show_comments;
                    cin >> show_comments;
                    while (!(show_comments == "sh" || show_comments == "Sh" || show_comments == "bb" || show_comments == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                        cin >> show_comments;
                    }
                    if (show_comments == "bb" || show_comments == "Bb")
                    {
                        goto back_after_comment_nauras_main;
                    }
                    if (show_comments == "sh" || show_comments == "Sh")
                    {
                        internet_cookers.nauras->display_comments_nauras_online_part_1();
                        cout << "brees [co] to add a comment:         [bb] to back one.\n";
                        string add_comment;
                        cin >> add_comment;
                        while (!(add_comment == "co" || add_comment == "Co" || add_comment == "bb" || add_comment == "Bb"))
                        {
                            cout << "sorry unknow code ...\n";
                            cout << "brees [co] to add a comment:         [bb] to back one.\n";
                            cin >> add_comment;

                        }
                        if (add_comment == "bb" || add_comment == "Bb")
                        {
                            goto back_after_comment_nauras1;

                        }
                        else if (add_comment == "co" || add_comment == "Co")
                        {
                            internet_cookers.nauras->add_new_comment_nauras_online_part_1(user_name);
                            goto back_after_comment_nauras1;
                        }
                    }
                }
                else  if (show_the_cook == "Fruit" || show_the_cook == "fruit")
                {
                back_after_comment_nauras2:
                    internet_cookers.nauras->display_nauras_part_2();
                    cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                    string show_comments;
                    cin >> show_comments;
                    while (!(show_comments == "sh" || show_comments == "Sh" || show_comments == "bb" || show_comments == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                        cin >> show_comments;
                    }
                    if (show_comments == "bb" || show_comments == "Bb")
                    {
                        goto back_after_comment_nauras_main;
                    }
                    if (show_comments == "sh" || show_comments == "Sh")
                    {
                        internet_cookers.nauras->display_comments_nauras_online_part_2();
                        cout << "brees [co] to add a comment:         [bb] to back one.";
                        string add_comment;
                        cin >> add_comment;
                        while (!(add_comment == "co" || add_comment == "Co" || add_comment == "bb" || add_comment == "Bb"))
                        {
                            cout << "sorry unknow code ...\n";
                            cout << "brees [co] to add a comment:         [bb] to back one.";
                            cin >> add_comment;

                        }
                        if (add_comment == "bb" || add_comment == "Bb")
                        {
                            goto back_after_comment_nauras2;

                        }
                        else if (add_comment == "co" || add_comment == "Co")
                        {
                            internet_cookers.nauras->add_new_comment_nauras_online_part_2(user_name);
                            goto back_after_comment_nauras2;

                        }
                    }
                }
                else  if (show_the_cook == "Toast" || show_the_cook == "toast")
                {
                back_after_comment_nauras3:
                    internet_cookers.nauras->display_nauras_part_3();
                    cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                    string show_comments;
                    cin >> show_comments;
                    while (!(show_comments == "sh" || show_comments == "Sh" || show_comments == "bb" || show_comments == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                        cin >> show_comments;
                    }
                    if (show_comments == "bb" || show_comments == "Bb")
                    {
                        goto back_after_comment_nauras_main;
                    }
                    if (show_comments == "sh" || show_comments == "Sh")
                    {
                        internet_cookers.nauras->display_comments_nauras_online_part_3();
                        cout << "brees [co] to add a comment:         [bb] to back one.";
                        string add_comment;
                        cin >> add_comment;
                        while (!(add_comment == "co" || add_comment == "Co" || add_comment == "bb" || add_comment == "Bb"))
                        {
                            cout << "sorry unknow code ...\n";
                            cout << "brees [co] to add a comment:         [bb] to back one.";
                            cin >> add_comment;

                        }
                        if (add_comment == "bb" || add_comment == "Bb")
                        {
                            goto back_after_comment_nauras3;

                        }
                        else if (add_comment == "co" || add_comment == "Co")
                        {
                            internet_cookers.nauras->add_new_comment_nauras_online_part_3(user_name);
                            goto back_after_comment_nauras3;
                        }
                    }
                }
            }
            else if (choos_acount == "NAGLAA" || choos_acount == "naglaa")
            {
            back_after_comment_naglaa_main:
                internet_cookers.naglaa->show_share_naglaa_cook(shape_of_show, line_or_star);
                cout << "\n---------------------------\n";
                cout << "enter cook name to display it :                  bress [back] to back to the main list - [bb] to back one.\n";
                string show_the_cook;
                cin >> show_the_cook;
                while (!(show_the_cook == "Coffee" || show_the_cook == "coffee" || show_the_cook == "Rice" || show_the_cook == "rice" || show_the_cook == "Cream" || show_the_cook == "cream" || show_the_cook == "back" || show_the_cook == "Back" || show_the_cook == "bb" || show_the_cook == "Bb"))
                {
                    cout << "sorry this cook is not found ..tray again.\n";
                    cout << "enter cook name to display it :                  bress [back] to back to the main list - [bb] to back one.\n";
                    cin >> show_the_cook;

                }
                if (show_the_cook == "back" || show_the_cook == "Back")
                {
                    goto the_main_list;

                }
                else  if (show_the_cook == "bb" || show_the_cook == "Bb")
                {
                    goto place_bb_2;

                }
                else  if (show_the_cook == "Coffee" || show_the_cook == "coffee")
                {
                back_after_comment_naglaa1:
                    internet_cookers.naglaa->display_naglaa_part_1();
                    cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                    string show_comments;
                    cin >> show_comments;
                    while (!(show_comments == "sh" || show_comments == "Sh" || show_comments == "bb" || show_comments == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                        cin >> show_comments;
                    }
                    if (show_comments == "bb" || show_comments == "Bb")
                    {
                        goto back_after_comment_naglaa_main;
                    }
                    if (show_comments == "sh" || show_comments == "Sh")
                    {
                        internet_cookers.naglaa->display_comments_naglaa_online_part_1();
                        cout << "brees [co] to add a comment:         [bb] to back one.\n";
                        string add_comment;
                        cin >> add_comment;
                        while (!(add_comment == "co" || add_comment == "Co" || add_comment == "bb" || add_comment == "Bb"))
                        {
                            cout << "sorry unknow code ...\n";
                            cout << "brees [co] to add a comment:         [bb] to back one.\n";
                            cin >> add_comment;

                        }
                        if (add_comment == "bb" || add_comment == "Bb")
                        {
                            goto back_after_comment_naglaa1;

                        }
                        else if (add_comment == "co" || add_comment == "Co")
                        {
                            internet_cookers.naglaa->add_new_comment_naglaa_online_part_1(user_name);
                            goto back_after_comment_naglaa1;
                        }
                    }
                }
                else  if (show_the_cook == "Rice" || show_the_cook == "rice")
                {
                back_after_comment_naglaa2:
                    internet_cookers.naglaa->display_naglaa_part_2();
                    cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                    string show_comments;
                    cin >> show_comments;
                    while (!(show_comments == "sh" || show_comments == "Sh" || show_comments == "bb" || show_comments == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                        cin >> show_comments;
                    }
                    if (show_comments == "bb" || show_comments == "Bb")
                    {
                        goto back_after_comment_naglaa_main;
                    }
                    if (show_comments == "sh" || show_comments == "Sh")
                    {
                        internet_cookers.naglaa->display_comments_naglaa_online_part_2();
                        cout << "brees [co] to add a comment:         [bb] to back one.";
                        string add_comment;
                        cin >> add_comment;
                        while (!(add_comment == "co" || add_comment == "Co" || add_comment == "bb" || add_comment == "Bb"))
                        {
                            cout << "sorry unknow code ...\n";
                            cout << "brees [co] to add a comment:         [bb] to back one.";
                            cin >> add_comment;

                        }
                        if (add_comment == "bb" || add_comment == "Bb")
                        {
                            goto back_after_comment_naglaa2;

                        }
                        else if (add_comment == "co" || add_comment == "Co")
                        {
                            internet_cookers.naglaa->add_new_comment_naglaa_online_part_2(user_name);
                            goto back_after_comment_naglaa2;

                        }
                    }
                }
                else  if (show_the_cook == "Cream" || show_the_cook == "cream")
                {
                back_after_comment_naglaa3:
                    internet_cookers.naglaa->display_naglaa_part_3();
                    cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                    string show_comments;
                    cin >> show_comments;
                    while (!(show_comments == "sh" || show_comments == "Sh" || show_comments == "bb" || show_comments == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                        cin >> show_comments;
                    }
                    if (show_comments == "bb" || show_comments == "Bb")
                    {
                        goto back_after_comment_naglaa_main;
                    }
                    if (show_comments == "sh" || show_comments == "Sh")
                    {
                        internet_cookers.naglaa->display_comments_naglaa_online_part_3();
                        cout << "brees [co] to add a comment:         [bb] to back one.";
                        string add_comment;
                        cin >> add_comment;
                        while (!(add_comment == "co" || add_comment == "Co" || add_comment == "bb" || add_comment == "Bb"))
                        {
                            cout << "sorry unknow code ...\n";
                            cout << "brees [co] to add a comment:         [bb] to back one.";
                            cin >> add_comment;

                        }
                        if (add_comment == "bb" || add_comment == "Bb")
                        {
                            goto back_after_comment_naglaa3;

                        }
                        else if (add_comment == "co" || add_comment == "Co")
                        {
                            internet_cookers.naglaa->add_new_comment_naglaa_online_part_3(user_name);
                            goto back_after_comment_naglaa3;
                        }
                    }
                }
            }
            else if (choos_acount == "AHMAD" || choos_acount == "ahmad")
            {
            back_after_comment_ahmad_main:
                internet_cookers.ahmad->show_share_ahmad_cook(shape_of_show, line_or_star);
                cout << "\n---------------------------\n";
                cout << "enter cook name to display it :                  bress [back] to back to the main list - [bb] to back one.\n";
                string show_the_cook;
                cin >> show_the_cook;
                while (!(show_the_cook == "Chicken" || show_the_cook == "chicken" || show_the_cook == "Baked" || show_the_cook == "baked" || show_the_cook == "Hot" || show_the_cook == "hot" || show_the_cook == "back" || show_the_cook == "Back" || show_the_cook == "bb" || show_the_cook == "Bb"))
                {
                    cout << "sorry this cook is not found ..tray again.\n";
                    cout << "enter cook name to display it :                  bress [back] to back to the main list - [bb] to back one.\n";
                    cin >> show_the_cook;

                }
                if (show_the_cook == "back" || show_the_cook == "Back")
                {
                    goto the_main_list;

                }
                else  if (show_the_cook == "bb" || show_the_cook == "Bb")
                {
                    goto place_bb_2;

                }
                else  if (show_the_cook == "Chicken" || show_the_cook == "chicken")
                {
                back_after_comment_ahmad1:
                    internet_cookers.ahmad->display_ahmad_part_1();
                    cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                    string show_comments;
                    cin >> show_comments;
                    while (!(show_comments == "sh" || show_comments == "Sh" || show_comments == "bb" || show_comments == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                        cin >> show_comments;
                    }
                    if (show_comments == "bb" || show_comments == "Bb")
                    {
                        goto back_after_comment_ahmad_main;
                    }
                    if (show_comments == "sh" || show_comments == "Sh")
                    {
                        internet_cookers.ahmad->display_comments_ahmad_online_part_1();
                        cout << "brees [co] to add a comment:         [bb] to back one.\n";
                        string add_comment;
                        cin >> add_comment;
                        while (!(add_comment == "co" || add_comment == "Co" || add_comment == "bb" || add_comment == "Bb"))
                        {
                            cout << "sorry unknow code ...\n";
                            cout << "brees [co] to add a comment:         [bb] to back one.\n";
                            cin >> add_comment;

                        }
                        if (add_comment == "bb" || add_comment == "Bb")
                        {
                            goto back_after_comment_ahmad1;

                        }
                        else if (add_comment == "co" || add_comment == "Co")
                        {
                            internet_cookers.ahmad->add_new_comment_ahmad_online_part_1(user_name);
                            goto back_after_comment_ahmad1;
                        }
                    }
                }
                else  if (show_the_cook == "Baked" || show_the_cook == "baked")
                {
                back_after_comment_ahmad2:
                    internet_cookers.ahmad->display_ahmad_part_2();
                    cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                    string show_comments;
                    cin >> show_comments;
                    while (!(show_comments == "sh" || show_comments == "Sh" || show_comments == "bb" || show_comments == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                        cin >> show_comments;
                    }
                    if (show_comments == "bb" || show_comments == "Bb")
                    {
                        goto back_after_comment_ahmad_main;
                    }
                    if (show_comments == "sh" || show_comments == "Sh")
                    {
                        internet_cookers.ahmad->display_comments_ahmad_online_part_2();
                        cout << "brees [co] to add a comment:         [bb] to back one.";
                        string add_comment;
                        cin >> add_comment;
                        while (!(add_comment == "co" || add_comment == "Co" || add_comment == "bb" || add_comment == "Bb"))
                        {
                            cout << "sorry unknow code ...\n";
                            cout << "brees [co] to add a comment:         [bb] to back one.";
                            cin >> add_comment;

                        }
                        if (add_comment == "bb" || add_comment == "Bb")
                        {
                            goto back_after_comment_ahmad2;

                        }
                        else if (add_comment == "co" || add_comment == "Co")
                        {
                            internet_cookers.ahmad->add_new_comment_ahmad_online_part_2(user_name);
                            goto back_after_comment_ahmad2;

                        }
                    }
                }
                else  if (show_the_cook == "Hot" || show_the_cook == "hot")
                {
                back_after_comment_ahmad3:
                    internet_cookers.ahmad->display_ahmad_part_3();
                    cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                    string show_comments;
                    cin >> show_comments;
                    while (!(show_comments == "sh" || show_comments == "Sh" || show_comments == "bb" || show_comments == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                        cin >> show_comments;
                    }
                    if (show_comments == "bb" || show_comments == "Bb")
                    {
                        goto back_after_comment_ahmad_main;
                    }
                    if (show_comments == "sh" || show_comments == "Sh")
                    {
                        internet_cookers.ahmad->display_comments_ahmad_online_part_3();
                        cout << "brees [co] to add a comment:         [bb] to back one.";
                        string add_comment;
                        cin >> add_comment;
                        while (!(add_comment == "co" || add_comment == "Co" || add_comment == "bb" || add_comment == "Bb"))
                        {
                            cout << "sorry unknow code ...\n";
                            cout << "brees [co] to add a comment:         [bb] to back one.";
                            cin >> add_comment;

                        }
                        if (add_comment == "bb" || add_comment == "Bb")
                        {
                            goto back_after_comment_ahmad3;

                        }
                        else if (add_comment == "co" || add_comment == "Co")
                        {
                            internet_cookers.ahmad->add_new_comment_ahmad_online_part_3(user_name);
                            goto back_after_comment_ahmad3;
                        }
                    }
                }
            }
            else if (choos_acount == "FOUR" || choos_acount == "four")
            {
            back_after_comment_four_main:
                m_s_int.my_cook_show_share_name_of_my_cook(shape_of_show, line_or_star);
                cout << "\n---------------------------\n";
                cout << "enter cook name to display it :                  bress [back] to back to the main list - [bb] to back one.\n";
                string show_the_cook;
                cin >> show_the_cook;
                while (!(show_the_cook == "Grilled" || show_the_cook == "grilled" || show_the_cook == "Vegetable" || show_the_cook == "vegetable" || show_the_cook == "Fruit" || show_the_cook == "fruit" || show_the_cook == "back" || show_the_cook == "Back" || show_the_cook == "bb" || show_the_cook == "Bb"))
                {
                    cout << "sorry this cook is not found ..tray again.\n";
                    cout << "enter cook name to display it :                  bress [back] to back to the main list - [bb] to back one.\n";
                    cin >> show_the_cook;

                }
                if (show_the_cook == "back" || show_the_cook == "Back")
                {
                    goto the_main_list;

                }
                else  if (show_the_cook == "bb" || show_the_cook == "Bb")
                {
                    goto place_bb_2;

                }
                else  if (show_the_cook == "Grilled" || show_the_cook == "grilled")
                {
                back_after_comment_four1:
                    m_s_int.display_my_cook_online_new_acount_part_1();
                    cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                    string show_comments;
                    cin >> show_comments;
                    while (!(show_comments == "sh" || show_comments == "Sh" || show_comments == "bb" || show_comments == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                        cin >> show_comments;
                    }
                    if (show_comments == "bb" || show_comments == "Bb")
                    {
                        goto back_after_comment_four_main;
                    }
                    if (show_comments == "sh" || show_comments == "Sh")
                    {
                        m_s_int.display_comments_my_cook_online_part_1();
                        cout << "brees [co] to add a comment:         [bb] to back one.\n";
                        string add_comment;
                        cin >> add_comment;
                        while (!(add_comment == "co" || add_comment == "Co" || add_comment == "bb" || add_comment == "Bb"))
                        {
                            cout << "sorry unknow code ...\n";
                            cout << "brees [co] to add a comment:         [bb] to back one.\n";
                            cin >> add_comment;

                        }
                        if (add_comment == "bb" || add_comment == "Bb")
                        {
                            goto back_after_comment_four1;

                        }
                        else if (add_comment == "co" || add_comment == "Co")
                        {
                            m_s_int.add_new_comment_online_part_1(user_name);
                            goto back_after_comment_four1;
                        }
                    }
                }
                else  if (show_the_cook == "Vegetable" || show_the_cook == "vegetable")
                {
                back_after_comment_four2:
                    m_s_int.display_my_cook_online_new_acount_part_2();
                    cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                    string show_comments;
                    cin >> show_comments;
                    while (!(show_comments == "sh" || show_comments == "Sh" || show_comments == "bb" || show_comments == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                        cin >> show_comments;
                    }
                    if (show_comments == "bb" || show_comments == "Bb")
                    {
                        goto back_after_comment_four_main;
                    }
                    if (show_comments == "sh" || show_comments == "Sh")
                    {
                        m_s_int.display_comments_my_cook_online_part_2();
                        cout << "brees [co] to add a comment:         [bb] to back one.";
                        string add_comment;
                        cin >> add_comment;
                        while (!(add_comment == "co" || add_comment == "Co" || add_comment == "bb" || add_comment == "Bb"))
                        {
                            cout << "sorry unknow code ...\n";
                            cout << "brees [co] to add a comment:         [bb] to back one.";
                            cin >> add_comment;

                        }
                        if (add_comment == "bb" || add_comment == "Bb")
                        {
                            goto back_after_comment_four2;

                        }
                        else if (add_comment == "co" || add_comment == "Co")
                        {
                            m_s_int.add_new_comment_online_part_2(user_name);
                            goto back_after_comment_four2;

                        }
                    }
                }
                else  if (show_the_cook == "Fruit" || show_the_cook == "fruit")
                {
                back_after_comment_four3:
                    m_s_int.display_my_cook_online_new_acount_part_3();
                    cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                    string show_comments;
                    cin >> show_comments;
                    while (!(show_comments == "sh" || show_comments == "Sh" || show_comments == "bb" || show_comments == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "brees [sh] to display a comments:         [bb] to back one.\n";
                        cin >> show_comments;
                    }
                    if (show_comments == "bb" || show_comments == "Bb")
                    {
                        goto back_after_comment_four_main;
                    }
                    if (show_comments == "sh" || show_comments == "Sh")
                    {
                        m_s_int.display_comments_my_cook_online_part_3();
                        cout << "brees [co] to add a comment:         [bb] to back one.";
                        string add_comment;
                        cin >> add_comment;
                        while (!(add_comment == "co" || add_comment == "Co" || add_comment == "bb" || add_comment == "Bb"))
                        {
                            cout << "sorry unknow code ...\n";
                            cout << "brees [co] to add a comment:         [bb] to back one.";
                            cin >> add_comment;

                        }
                        if (add_comment == "bb" || add_comment == "Bb")
                        {
                            goto back_after_comment_four3;

                        }
                        else if (add_comment == "co" || add_comment == "Co")
                        {
                            m_s_int.add_new_comment_online_part_3(user_name);
                            goto back_after_comment_four3;
                        }
                    }
                }
            }
            else if (choos_acount == "Ma" || choos_acount == "ma")
            {
            back_control_acount:
                if (m_s_int.a_new_cook_i_share_it <= 0)
                {
                    cout << "\n\n            YOU HAVE NOT ANY COOKS YET, BREES [add] TO ADD NEW\n            OR SERARCH IN ENTERNET.\n\n\n";

                }
                else
                {
                    m_s_int.my_cook_show_share_name_of_my_cook_a_new_account(shape_of_show, line_or_star);
                }
                cout << "enter cook name to display it's list:               to back [bb] - [back] to the mainlist\nenter [ad] to add a new cook:\n";
                string cook_name_to_display_or_add;
                cin >> cook_name_to_display_or_add;
                m_s_int.if_cook_found_return(cook_name_to_display_or_add);
                while (!(cook_name_to_display_or_add == "bb" || cook_name_to_display_or_add == "Bb" || cook_name_to_display_or_add == "Back" || cook_name_to_display_or_add == "back" || cook_name_to_display_or_add == "ad" || cook_name_to_display_or_add == "Ad" || m_s_int.is_cook_found))
                {
                    cout << "unknow code ...tray again..\n";
                    cout << "enter cook name to display it's list:               to back [bb] - [back] to the mainlist\nenter [ad] to add a new cook:\n";
                    cin >> cook_name_to_display_or_add;
                    m_s_int.if_cook_found_return(cook_name_to_display_or_add);
                }
                if (cook_name_to_display_or_add == "bb" || cook_name_to_display_or_add == "Bb")
                {
                    goto place_bb_2;
                }
                else if (cook_name_to_display_or_add == "Back" || cook_name_to_display_or_add == "back")
                {
                    goto the_main_list;
                }
                else if (cook_name_to_display_or_add == "Ad" || cook_name_to_display_or_add == "ad")
                {
                    m_s_int.the_new_cook_in_internet();
                    string after_add_cook;
                    cout << "prees [bb] to back :\n";

                    cin >> after_add_cook;
                    while (!(after_add_cook == "bb" || after_add_cook == "Bb"))
                    {
                        cout << "unknow code ...tray again..\n";
                        cout << "prees [bb] to back :\n";
                        cin >> after_add_cook;

                    }
                    if (after_add_cook == "bb" || after_add_cook == "Bb")
                    {
                        goto back_control_acount;

                    }
                }
                else if (!(cook_name_to_display_or_add == "bb" || cook_name_to_display_or_add == "Bb" || cook_name_to_display_or_add == "Back" || cook_name_to_display_or_add == "back" || cook_name_to_display_or_add == "ad" || cook_name_to_display_or_add == "Ad") || m_s_int.is_cook_found)
                {
                    m_s_int.display_comments_my_cook_online_the_new_cook(cook_name_to_display_or_add);
                    cout << "\n-----------------------\n";
                    cout << "prees [sh] to show the comments:          [bb] to back one\nprees [ra] to display it's rate:\n";
                    string display_rate_the_new_cook;
                    cin >> display_rate_the_new_cook;
                    while (!(display_rate_the_new_cook == "bb" || display_rate_the_new_cook == "Bb" || display_rate_the_new_cook == "sh" || display_rate_the_new_cook == "Sh" || display_rate_the_new_cook == "ra" || display_rate_the_new_cook == "Ra"))
                    {
                        cout << "unknow code ...tray again..\n";
                        cout << "prees [sh] to show the comments:          [bb] to back one\nprees [ra] to display it's rate:\n";
                        cin >> display_rate_the_new_cook;

                    }
                    if (display_rate_the_new_cook == "bb" || display_rate_the_new_cook == "Bb")
                    {
                        goto back_control_acount;
                    }
                    else if (display_rate_the_new_cook == "ra" || display_rate_the_new_cook == "Ra")
                    {
                        m_s_int.rate_of_views_last_week_evaluation_the_new_cook(cook_name_to_display_or_add);
                        cout << "prees [bb] to back :\n";
                        string after_rate;
                        cin >> after_rate;
                        while (!(after_rate == "bb" || after_rate == "Bb"))
                        {
                            cout << "unknow code ...tray again..\n";
                            cout << "prees [bb] to back :\n";
                            cin >> after_rate;

                        }
                        if (after_rate == "bb" || after_rate == "Bb")
                        {
                            goto back_control_acount;

                        }
                    }
                    else if (display_rate_the_new_cook == "sh" || display_rate_the_new_cook == "Sh")
                    {
                        m_s_int.display_comments_my_cook_online_the_new_cook(cook_name_to_display_or_add);
                        cout << "prees [bb] to back :\n";
                        string after_show;
                        cin >> after_show;
                        while (!(after_show == "bb" || after_show == "Bb"))
                        {
                            cout << "unknow code ...tray again..\n";
                            cout << "prees [bb] to back :\n";
                            cin >> after_show;

                        }
                        if (after_show == "bb" || after_show == "Bb")
                        {
                            goto back_control_acount;

                        }
                    }

                }
            }
        }
    }
    if (choos == "se" || choos == "Se")
    {
    siting:
        cout << "THIME:                    [th]      press [bb] to back\n";
        cout << "ABOUT THE SHOW:           [sh]\n";
        cout << "SOUNDs                    [su]\n";
        cout << "COOK DELETE:              [cd]\n";
        cout << "ABOUT US:                 [us]\n\n";
        string th_sh_su;
        cin >> th_sh_su;
        cout << "--------------------\n";
        while (!(th_sh_su == "th" || th_sh_su == "Th" || th_sh_su == "sh" || th_sh_su == "Sh" || th_sh_su == "su" || th_sh_su == "Su" || th_sh_su == "bb" || th_sh_su == "Bb" || th_sh_su == "cd" || th_sh_su == "Cd" || th_sh_su == "us" || th_sh_su == "Us"))
        {
            cout << "unknow code....tray again\n";
            cout << "THIME:                    [th]\n";
            cout << "ABOUT THE SHOW:           [sh]\n";
            cout << "SOUNDs                    [su]\n\n";
            cin >> th_sh_su;
            cout << "--------------------\n";

        }
        if (th_sh_su == "th" || th_sh_su == "Th")
        {
        head:
            /* cout << "GOLD KING: (gold & back)         [q]        prees [bb] to back\n";
             cout << "PAINTING: (white & blue)         [a]\n";
             cout << "FOREST: (green & cream)          [z]\n";
             cout << "CLASSIC: (grey & aque)           [w]\n";
             cout << "SYSTEM: (black & white)     =    [s]\n\n";*/
            string thime = "s";

            /*if (!(th_sh_su == "th" || th_sh_su == "Th" || th_sh_su == "sh" || th_sh_su == "Sh" || th_sh_su == "su" || th_sh_su == "Su" || th_sh_su == "bb" || th_sh_su == "Bb"))
            {
                cout << "unknow code....tray again\n";
                cout << "THIME:                    [th]\n";
                cout << "ABOUT THE SHOW:           [sh]\n";
                cout << "SOUNDs                    [su]\n\n";
                cin >> th_sh_su;
                cout << "--------------------\n";
                continue;
            }*/
            if (thime == "s" || thime == "S")
            {
                system("color 0F");
                cout << "GOLD KING: (gold & back)         [q]        prees [bb] to back\n";
                cout << "PAINTING: (white & blue)         [a]\n";
                cout << "FOREST: (green & cream)          [z]\n";
                cout << "CLASSIC: (grey & aque)           [w]\n";
                cout << "SYSTEM: (black & white)     =    [s]\n\n";
                cin >> thime;
            }
            while ((!(thime == "q" || thime == "Q" || thime == "a" || thime == "A" || thime == "z" || thime == "Z" || thime == "w" || thime == "W" || thime == "S" || thime == "s" || thime == "bb" || thime == "Bb")))
            {
                cout << "unknow code....tray again\n";
                cout << "GOLD KING: (gold & back)         [q]        prees [bb] to back\n";
                cout << "PAINTING: (white & blue)         [a]\n";
                cout << "FOREST: (green & cream)          [z]\n";
                cout << "CLASSIC: (grey & aque)           [w]\n";
                cout << "SYSTEM: (black & white)     =    [s]\n\n";
                cin >> thime;
            }
            if (thime == "Q" || thime == "q")
            {
                system("color 0E");
                cout << "GOLD KING: (gold & back)     =   [q]        prees [bb] to back\n";
                cout << "PAINTING: (white & blue)         [a]\n";
                cout << "FOREST: (green & cream)          [z]\n";
                cout << "CLASSIC: (grey & aque)           [w]\n";
                cout << "SYSTEM: (black & white)          [s]\n\n";
                cin >> thime;
            }
            if (thime == "a" || thime == "A")
            {
                system("color F1");
                cout << "GOLD KING: (gold & back)         [q]        prees [bb] to back\n";
                cout << "PAINTING: (white & blue)     =   [a]\n";
                cout << "FOREST: (green & cream)          [z]\n";
                cout << "CLASSIC: (grey & aque)           [w]\n";
                cout << "SYSTEM: (black & white)          [s]\n\n";
                cin >> thime;
            }
            if (thime == "z" || thime == "Z")
            {
                system("color F2");
                cout << "GOLD KING: (gold & back)         [q]        prees [bb] to back\n";
                cout << "PAINTING: (white & blue)         [a]\n";
                cout << "FOREST: (green & cream)      =   [z]\n";
                cout << "CLASSIC: (grey & aque)           [w]\n";
                cout << "SYSTEM: (black & white)          [s]\n\n";
                cin >> thime;
            }
            if (thime == "w" || thime == "W")
            {
                system("color 71");
                cout << "GOLD KING: (gold & back)         [q]        prees [bb] to back\n";
                cout << "PAINTING: (white & blue)         [a]\n";
                cout << "FOREST: (green & cream)          [z]\n";
                cout << "CLASSIC: (grey & aque)       =   [w]\n";
                cout << "SYSTEM: (black & white)          [s]\n\n";
                cin >> thime;
            }
            if (thime == "Bb" || thime == "bb")
            {
                goto siting;
            }
            goto head;

        }
        else if (th_sh_su == "bb" || th_sh_su == "Bb")
        {
            goto the_main_list;
        }
        else if (th_sh_su == "sh" || th_sh_su == "Sh")
        {
        about_the_show_head:
            cout << "ABOUT THE LINEs:       [n]      press [bb] to back\n";
            cout << "WIDTH AND LENGTH:      [l]\n\n";
            string n_l;
            cin >> n_l;
            while (1)
            {
                if (n_l == "n" || n_l == "N")
                {
                line_or_star_head:
                    if (line_or_star == "li" || line_or_star == "Li")
                        cout << "\n----------\n";
                    if (line_or_star == "st" || line_or_star == "St")
                        cout << "\n**********\n";

                    cout << "| sample |";
                    if (line_or_star == "li" || line_or_star == "Li")
                        cout << "\n----------\n\n";
                    if (line_or_star == "st" || line_or_star == "St")
                        cout << "\n**********\n\n";
                    cout << "if you want \"----------\" prees        [li]          [bb] to back\n";
                    cout << "if you want \"**********\" prees        [st]\n\n";
                    cin >> line_or_star;
                    cout << "-------------------------\n";

                    while (!(line_or_star == "li" || line_or_star == "Li" || line_or_star == "st" || line_or_star == "St" || line_or_star == "bb" || line_or_star == "Bb"))
                    {
                        cout << "unknow code....tray again\n";
                        if (line_or_star == "li" || line_or_star == "Li")
                            cout << "\n----------\n";
                        if (line_or_star == "st" || line_or_star == "St")
                            cout << "\n**********\n";

                        cout << "| sample |";
                        if (line_or_star == "li" || line_or_star == "Li")
                            cout << "\n----------\n\n";
                        if (line_or_star == "st" || line_or_star == "St")
                            cout << "\n**********\n\n";
                        cout << "if you want \"----------\" prees        [li]          [bb] to back\n";
                        cout << "if you want \"**********\" prees        [st]\n\n";
                        cin >> line_or_star;
                        cout << "-------------------------\n";

                    }
                    if (line_or_star == "bb" || line_or_star == "Bb")
                    {
                        goto about_the_show_head;
                    }
                    goto line_or_star_head;
                }
                else if (n_l == "l" || n_l == "L")
                {
                shape_of_show_head:
                    if (shape_of_show == "le" || shape_of_show == "Le")
                    {
                        if (line_or_star == "li" || line_or_star == "Li")
                            cout << "\n----------                  ----------\n";
                        if (line_or_star == "st" || line_or_star == "St")
                            cout << "\n**********                  ********\n";
                        cout << "| sample |                  | sample |";
                        if (line_or_star == "li" || line_or_star == "Li")
                            cout << "\n----------                  ----------\n";
                        if (line_or_star == "st" || line_or_star == "St")
                            cout << "\n**********                  **********\n";
                    }
                    else if (shape_of_show == "cr" || shape_of_show == "Cr")
                    {
                        if (line_or_star == "li" || line_or_star == "Li")
                            cout << "\n----------\n";
                        if (line_or_star == "st" || line_or_star == "St")
                            cout << "\n**********\n";
                        cout << "| sample |";
                        if (line_or_star == "li" || line_or_star == "Li")
                            cout << "\n----------\n";
                        if (line_or_star == "st" || line_or_star == "St")
                            cout << "\n**********\n";
                        if (line_or_star == "li" || line_or_star == "Li")
                            cout << "\n----------\n";
                        if (line_or_star == "st" || line_or_star == "St")
                            cout << "\n**********\n";
                        cout << "| sample |";
                        if (line_or_star == "li" || line_or_star == "Li")
                            cout << "\n----------\n";
                        if (line_or_star == "st" || line_or_star == "St")
                            cout << "\n**********\n";
                    }
                    cout << "if you want the show by \"width\"      [le]          [bb] to back\n";
                    cout << "if you want the show by \"lingth\"     [cr]\n\n";
                    cin >> shape_of_show;
                    cout << "-------------------------\n";
                    while (!(shape_of_show == "cr" || shape_of_show == "Cr" || shape_of_show == "le" || shape_of_show == "Le" || shape_of_show == "bb" || shape_of_show == "Bb"))
                    {
                        cout << "unknow code....tray again\n";
                        if (shape_of_show == "le" || shape_of_show == "Le")
                        {
                            if (line_or_star == "li" || line_or_star == "Li")
                                cout << "\n--------                  --------\n";
                            if (line_or_star == "st" || line_or_star == "St")
                                cout << "\n********                  ********\n";
                            cout << "| sample |                  | sample |";
                            if (line_or_star == "li" || line_or_star == "Li")
                                cout << "\n--------                  --------\n";
                            if (line_or_star == "st" || line_or_star == "St")
                                cout << "\n********                  ********\n";
                        }
                        else if (shape_of_show == "cr" || shape_of_show == "Cr")
                        {
                            if (line_or_star == "li" || line_or_star == "Li")
                                cout << "\n--------\n";
                            if (line_or_star == "st" || line_or_star == "St")
                                cout << "\n********\n";
                            cout << "| sample |";
                            if (line_or_star == "li" || line_or_star == "Li")
                                cout << "\n--------\n";
                            if (line_or_star == "st" || line_or_star == "St")
                                cout << "\n********\n";
                            if (line_or_star == "li" || line_or_star == "Li")
                                cout << "\n--------\n";
                            if (line_or_star == "st" || line_or_star == "St")
                                cout << "\n********\n";
                            cout << "| sample |";
                            if (line_or_star == "li" || line_or_star == "Li")
                                cout << "\n--------\n";
                            if (line_or_star == "st" || line_or_star == "St")
                                cout << "\n********\n";
                        }
                        cout << "if you want the show by \"width\"      [le]          [bb] to back\n";
                        cout << "if you want the show by \"lingth\"     [cr]\n\n";
                        cin >> shape_of_show;
                        cout << "-------------------------\n";

                    }
                    if (shape_of_show == "bb" || shape_of_show == "Bb")
                    {
                        goto about_the_show_head;
                    }
                    goto shape_of_show_head;

                }
                else if (n_l == "bb" || n_l == "Bb")
                {
                    goto siting;
                }
                cout << "unknow code....tray again\n";
                cout << "ABOUT THE LINEs:       [n]      press [bb] to back\n";
                cout << "WIDTH AND LENGTH:      [l]\n\n";
                cin >> n_l;
                cout << "-------------------------\n";

            }
        }
        else if (th_sh_su == "su" || th_sh_su == "Su")
        {
            int sound = 75;
            while (1)
            {

                if (sound <= 0)
                {
                    sound = 0;
                    cout << "MUSIC:        #|-----------------------#         [500] to back\n";
                    cout << "the extent sound: ";
                    while (!(cin >> sound))
                    {
                        cout << "unknow entery (only number)\n";
                        cin.clear();
                        cout << "MUSIC:        #|-----------------------#         [500] to back\n";
                        cout << "the extent sound: ";
                    }
                }
                else if (sound > 0 && sound <= 10)
                {
                    cout << "MUSIC:        #--|---------------------#         [500] to back\n";
                    cout << "the extent sound: ";
                    while (!(cin >> sound))
                    {
                        cout << "unknow entery (only number)\n";
                        cin.clear();
                        //cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "MUSIC:        #--|---------------------#         [500] to back\n";
                        cout << "the extent sound: ";
                    }
                }
                else if (sound > 10 && sound <= 20)
                {
                    cout << "MUSIC:        #-----|------------------#         [500] to back\n";
                    cout << "the extent sound: ";

                    while (!(cin >> sound))
                    {
                        cout << "unknow entery (only number)\n";
                        cin.clear();
                        //cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "MUSIC:        #-----|------------------#         [500] to back\n";
                        cout << "the extent sound: ";
                    }
                }
                else if (sound > 20 && sound <= 30)
                {
                    cout << "MUSIC:        #-------|----------------#         [500] to back\n";
                    cout << "the extent sound: ";

                    while (!(cin >> sound))
                    {
                        cout << "unknow entery (only number)\n";
                        cin.clear();
                        //cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "MUSIC:        #-------|----------------#         [500] to back\n";
                        cout << "the extent sound: ";
                    }
                }
                else if (sound > 30 && sound <= 40)
                {
                    cout << "MUSIC:        #---------|--------------#         [500] to back\n";
                    cout << "the extent sound: ";

                    while (!(cin >> sound))
                    {
                        cout << "unknow entery (only number)\n";
                        cin.clear();
                        //cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "MUSIC:        #---------|--------------#         [500] to back\n";
                        cout << "the extent sound: ";
                    }
                }
                else if (sound > 40 && sound <= 50)
                {
                    cout << "MUSIC:        #-----------|------------#         [bb] to back\n";
                    cout << "the extent sound: ";

                    while (!(cin >> sound))
                    {
                        cout << "unknow entery (only number)\n";
                        cin.clear();
                        // cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "MUSIC:        #-----------|------------#         [bb] to back\n";
                        cout << "the extent sound: ";
                    }
                }
                else if (sound > 50 && sound <= 60)
                {
                    cout << "MUSIC:        #-------------|----------#         [500] to back\n";
                    cout << "the extent sound: ";

                    while (!(cin >> sound))
                    {
                        cout << "unknow entery (only number)\n";
                        cin.clear();
                        //cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "MUSIC:        #-------------|----------#         [500] to back\n";
                        cout << "the extent sound: ";
                    }
                }
                else  if (sound > 60 && sound <= 70)
                {
                    cout << "MUSIC:        #---------------|--------#         [500] to back\n";
                    cout << "the extent sound: ";

                    while (!(cin >> sound))
                    {
                        cout << "unknow entery (only number)\n";
                        cin.clear();
                        //cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "MUSIC:        #---------------|--------#         [500] to back\n";
                        cout << "the extent sound: ";
                    }
                }
                else if (sound > 70 && sound <= 80)
                {
                    cout << "MUSIC:        #-----------------|------#         [500] to back\n";
                    cout << "the extent sound: ";

                    while (!(cin >> sound))
                    {
                        cout << "unknow entery (only number)\n";
                        cin.clear();
                        //  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "MUSIC:        #-----------------|------#         [500] to back\n";
                        cout << "the extent sound: ";
                    }
                }
                else if (sound > 80 && sound <= 90)
                {
                    cout << "MUSIC:        #-------------------|----#         [500] to back\n";
                    cout << "the extent sound: ";

                    while (!(cin >> sound))
                    {
                        cout << "unknow entery (only number)\n";
                        cin.clear();
                        // cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "MUSIC:        #-------------------|----#         [500] to back\n";
                        cout << "the extent sound: ";
                    }
                }
                else if (sound > 90 && sound < 100)
                {
                    cout << "MUSIC:        #-------------------|--#         [500] to back\n";
                    cout << "the extent sound: ";

                    while (!(cin >> sound))
                    {
                        cout << "unknow entery (only number)\n";
                        cin.clear();
                        //cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "MUSIC:        #-------------------|--#         [bb] to back\n";
                        cout << "the extent sound: ";
                    }
                }
                else if (sound >= 100 && sound != 500)
                {
                    sound = 100;
                    cout << "MUSIC:        #-----------------------|#         [500] to back\n";
                    cout << "the extent sound: ";

                    while (!(cin >> sound))
                    {
                        cout << "unknow entery (only number)\n";
                        cin.clear();
                        // cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "MUSIC:        #-----------------------|#         [500] to back\n";
                        cout << "the extent sound: ";
                    }
                }
                else if (sound == 500)
                {
                    cout << "----------------------------\n";
                    goto siting;
                }

            }
        }
        else if (th_sh_su == "cd" || th_sh_su == "Cd")
        {
        delete_cook:
            cout << "DELETE A OFLINE COOK:        [of]     press [bb] to back\n";
            cout << "DELETE A ONLINE COOK:        [on]\n\n";
            string delete_a_ccok;
            cin >> delete_a_ccok;
            cout << "------------------------\n";
            while (!(delete_a_ccok == "of" || delete_a_ccok == "Of" || delete_a_ccok == "on" || delete_a_ccok == "On" || delete_a_ccok == "bb" || delete_a_ccok == "Bb"))
            {
                cout << "unknow code..tray again\n\n";
                cout << "DELETE A OFLINE COOK:        [of]     press [bb] to back\n";
                cout << "DELETE A ONLINE COOK:        [on]\n\n";
                cin >> delete_a_ccok;
                cout << "------------------------\n";
            }
            if (delete_a_ccok == "bb" || delete_a_ccok == "Bb")
            {
                goto siting;
            }
            else if (delete_a_ccok == "of" || delete_a_ccok == "Of")
            {
            delete_cook_ofline:


                if (user_name == "a" && passowrd == "b")
                {
                    mc.my_cook_show_main_name_of_my_cook(shape_of_show, line_or_star);
                    cout << "ENTER COOK NAME TO DELETE IT :             [bb] to back one.\n";
                    string delete_ofline_cook;
                    cin >> delete_ofline_cook;
                    cout << "----------------------------------\n";
                    mc.if_cook_found_return(delete_ofline_cook);

                    while (!(((delete_ofline_cook == "Fried Eggs" || delete_ofline_cook == "Fried" || delete_ofline_cook == "fried Eggs" || delete_ofline_cook == "fried") && mc.i_c_1.is_it_found_1) || ((delete_ofline_cook == "White Rice" || delete_ofline_cook == "White" || delete_ofline_cook == "white Rice" || delete_ofline_cook == "white") && mc.i_c_2.is_it_found_2) || ((delete_ofline_cook == "Chicken Kabsa" || delete_ofline_cook == "Chicken" || delete_ofline_cook == "chicken Kabsa" || delete_ofline_cook == "chicken") && mc.i_c_3.is_it_found_3) || ((delete_ofline_cook == "Tea" || delete_ofline_cook == "tea") && mc.i_c_4.is_it_found_4) || ((delete_ofline_cook == "Pasta" || delete_ofline_cook == "pasta") && mc.i_c_5.is_it_found_5) || ((delete_ofline_cook == "Fresh Salad" || delete_ofline_cook == "Fresh" || delete_ofline_cook == "fresh Salad" || delete_ofline_cook == "fresh") && mc.i_c_6.is_it_found_6) || mc.is_cook_found || delete_ofline_cook == "ad" || delete_ofline_cook == "Ad" || delete_ofline_cook == "bb" || delete_ofline_cook == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "ENTER COOK NAME TO DELETE IT :             [bb] to back one.\n";
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        getline(cin, delete_ofline_cook);
                        cout << "----------------------------------\n";

                        while (delete_ofline_cook.empty())
                        {
                            cout << "entering can not be empty....tray again\n";
                            cout << "ENTER COOK NAME TO DELETE IT :             [bb] to back one.\n";
                            getline(cin, delete_ofline_cook);
                            cout << "----------------------------------\n";

                        }
                        mc.if_cook_found_return(delete_ofline_cook);

                    }
                    if ((delete_ofline_cook == "Fried Eggs" || delete_ofline_cook == "Fried" || delete_ofline_cook == "fried Eggs" || delete_ofline_cook == "fried") && mc.i_c_1.is_it_found_1)
                    {
                        mc.display_my_cook_own_part_1();
                        cout << "-----------------------------\n";
                        cout << "are you shore:       [yes - no]\n";
                        string delete_cook;
                        cin >> delete_cook;
                        while (!(delete_cook == "yes" || delete_cook == "Yes" || delete_cook == "no" || delete_cook == "No"))
                        {
                            cout << "unknow code..tray again\n\n";
                            cout << "-----------------------------\n";
                            cout << "are you shore to delete:       [yes - no]\n";
                            cin >> delete_cook;
                        }
                        if (delete_cook == "yes" || delete_cook == "Yes")
                        {
                            mc.my_cook_delete_main_name_of_cook_1();
                            goto delete_cook_ofline;
                        }
                        else if (delete_cook == "no" || delete_cook == "No")
                        {
                            goto delete_cook_ofline;

                        }

                    }
                    else if ((delete_ofline_cook == "White Rice" || delete_ofline_cook == "White" || delete_ofline_cook == "white Rice" || delete_ofline_cook == "white") && mc.i_c_2.is_it_found_2)
                    {
                        mc.display_my_cook_own_part_2();
                        cout << "-----------------------------\n";
                        cout << "are you shore:       [yes - no]\n";
                        string delete_cook;
                        cin >> delete_cook;
                        while (!(delete_cook == "yes" || delete_cook == "Yes" || delete_cook == "no" || delete_cook == "No"))
                        {
                            cout << "unknow code..tray again\n\n";
                            cout << "-----------------------------\n";
                            cout << "are you shore to delete:       [yes - no]\n";
                            cin >> delete_cook;
                        }
                        if (delete_cook == "yes" || delete_cook == "Yes")
                        {
                            mc.my_cook_delete_main_name_of_cook_2();
                            goto delete_cook_ofline;
                        }
                        else if (delete_cook == "no" || delete_cook == "No")
                        {
                            goto delete_cook_ofline;

                        }

                    }
                    else if ((delete_ofline_cook == "Chicken Kabsa" || delete_ofline_cook == "Chicken" || delete_ofline_cook == "chicken Kabsa" || delete_ofline_cook == "chicken") && mc.i_c_3.is_it_found_3)
                    {
                        mc.display_my_cook_own_part_3();
                        cout << "-----------------------------\n";
                        cout << "are you shore:       [yes - no]\n";
                        string delete_cook;
                        cin >> delete_cook;
                        while (!(delete_cook == "yes" || delete_cook == "Yes" || delete_cook == "no" || delete_cook == "No"))
                        {
                            cout << "unknow code..tray again\n\n";
                            cout << "-----------------------------\n";
                            cout << "are you shore to delete:       [yes - no]\n";
                            cin >> delete_cook;
                        }
                        if (delete_cook == "yes" || delete_cook == "Yes")
                        {
                            mc.my_cook_delete_main_name_of_cook_3();
                            goto delete_cook_ofline;
                        }
                        else if (delete_cook == "no" || delete_cook == "No")
                        {
                            goto delete_cook_ofline;

                        }
                    }
                    else if ((delete_ofline_cook == "Tea" || delete_ofline_cook == "tea") && mc.i_c_4.is_it_found_4)
                    {
                        mc.display_my_cook_own_part_4();
                        cout << "-----------------------------\n";
                        cout << "are you shore:       [yes - no]\n";
                        string delete_cook;
                        cin >> delete_cook;
                        while (!(delete_cook == "yes" || delete_cook == "Yes" || delete_cook == "no" || delete_cook == "No"))
                        {
                            cout << "unknow code..tray again\n\n";
                            cout << "-----------------------------\n";
                            cout << "are you shore to delete:       [yes - no]\n";
                            cin >> delete_cook;
                        }
                        if (delete_cook == "yes" || delete_cook == "Yes")
                        {
                            mc.my_cook_delete_main_name_of_cook_4();
                            goto delete_cook_ofline;
                        }
                        else if (delete_cook == "no" || delete_cook == "No")
                        {
                            goto delete_cook_ofline;

                        }
                    }
                    else if ((delete_ofline_cook == "Pasta" || delete_ofline_cook == "pasta") && mc.i_c_5.is_it_found_5)
                    {
                        mc.display_my_cook_own_part_5();
                        cout << "-----------------------------\n";
                        cout << "are you shore:       [yes - no]\n";
                        string delete_cook;
                        cin >> delete_cook;
                        while (!(delete_cook == "yes" || delete_cook == "Yes" || delete_cook == "no" || delete_cook == "No"))
                        {
                            cout << "unknow code..tray again\n\n";
                            cout << "-----------------------------\n";
                            cout << "are you shore to delete:       [yes - no]\n";
                            cin >> delete_cook;
                        }
                        if (delete_cook == "yes" || delete_cook == "Yes")
                        {
                            mc.my_cook_delete_main_name_of_cook_5();
                            goto delete_cook_ofline;
                        }
                        else if (delete_cook == "no" || delete_cook == "No")
                        {
                            goto delete_cook_ofline;

                        }
                    }
                    else if ((delete_ofline_cook == "Fresh Salad" || delete_ofline_cook == "Fresh" || delete_ofline_cook == "fresh Salad" || delete_ofline_cook == "fresh") && mc.i_c_6.is_it_found_6)
                    {
                        mc.display_my_cook_own_part_6();
                        cout << "-----------------------------\n";
                        cout << "are you shore:       [yes - no]\n";
                        string delete_cook;
                        cin >> delete_cook;
                        while (!(delete_cook == "yes" || delete_cook == "Yes" || delete_cook == "no" || delete_cook == "No"))
                        {
                            cout << "unknow code..tray again\n\n";
                            cout << "-----------------------------\n";
                            cout << "are you shore to delete:       [yes - no]\n";
                            cin >> delete_cook;
                        }
                        if (delete_cook == "yes" || delete_cook == "Yes")
                        {
                            mc.my_cook_delete_main_name_of_cook_6();
                            goto delete_cook_ofline;
                        }
                        else if (delete_cook == "no" || delete_cook == "No")
                        {
                            goto delete_cook_ofline;

                        }
                    }
                    else if (delete_ofline_cook == "bb" || delete_ofline_cook == "Bb")
                    {
                        goto delete_cook;
                    }
                    else if (mc.if_cook_found_return(delete_ofline_cook))
                    {
                        mc.didsplay_the_new_cook_in_main(delete_ofline_cook);
                        cout << "-----------------------------\n";
                        cout << "are you shore:       [yes - no]\n";
                        string delete_cook;
                        cin >> delete_cook;
                        while (!(delete_cook == "yes" || delete_cook == "Yes" || delete_cook == "no" || delete_cook == "No"))
                        {
                            cout << "unknow code..tray again\n\n";
                            cout << "-----------------------------\n";
                            cout << "are you shore to delete:       [yes - no]\n";
                            cin >> delete_cook;
                        }
                        if (delete_cook == "yes" || delete_cook == "Yes")
                        {
                            mc.my_cook_delete_main_name_of_cook_new_cook(delete_ofline_cook);
                            goto delete_cook_ofline;
                        }
                        else if (delete_cook == "no" || delete_cook == "No")
                        {
                            goto delete_cook_ofline;

                        }
                    }
                    goto delete_cook_ofline;
                }
                else if (!(user_name == "a" && passowrd == "b"))
                {
                    if (mc.how_many_new_cook_in_main <= 0)
                    {
                        cout << "\n\n            YOU HAVE NOT ANY COOKS YET\n\n\n";

                    }
                    else if (mc.how_many_new_cook_in_main > 0)
                    {

                        mc.if_acount_new_show_new_cooks(shape_of_show, line_or_star);
                    }
                    cout << "ENTER COOK NAME TO DELETE IT :             [bb] to back one.\n";
                    string delete_ofline_cook;
                    cin >> delete_ofline_cook;
                    cout << "----------------------------------\n";
                    mc.if_cook_found_return(delete_ofline_cook);

                    while (!(mc.if_cook_found_return(delete_ofline_cook) || delete_ofline_cook == "bb" || delete_ofline_cook == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "ENTER COOK NAME TO DELETE IT :             [bb] to back one.\n";
                        cin >> delete_ofline_cook;
                        cout << "----------------------------------\n";

                        while (delete_ofline_cook.empty())
                        {
                            cout << "entering can not be empty....tray again\n";
                            cout << "ENTER COOK NAME TO DELETE IT :             [bb] to back one.\n";
                            cin >> delete_ofline_cook;
                            cout << "----------------------------------\n";

                        }
                        mc.if_cook_found_return(delete_ofline_cook);
                    }
                    if (mc.if_cook_found_return(delete_ofline_cook))
                    {
                        mc.display_a_new_cook_with_a_new_acount(delete_ofline_cook);
                        cout << "are you shore:       [yes - no]\n";
                        string delete_cook;
                        cin >> delete_cook;
                        while (!(delete_cook == "yes" || delete_cook == "Yes" || delete_cook == "no" || delete_cook == "No"))
                        {
                            cout << "unknow code..tray again\n\n";
                            cout << "-----------------------------\n";
                            cout << "are you shore to delete:       [yes - no]\n";
                            cin >> delete_cook;
                        }
                        if (delete_cook == "yes" || delete_cook == "Yes")
                        {
                            mc.my_cook_delete_main_name_of_cook_new_cook(delete_ofline_cook);
                            goto delete_cook_ofline;
                        }
                        else if (delete_cook == "no" || delete_cook == "No")
                        {
                            goto delete_cook_ofline;

                        }
                    }
                    else if (delete_ofline_cook == "bb" || delete_ofline_cook == "Bb")
                    {
                        goto delete_cook;
                    }


                }
            }
            else if (delete_a_ccok == "on" || delete_a_ccok == "On")
            {
            delete_cook_online:

                if (user_name == "a" && passowrd == "b")
                {
                    m_s_int.my_cook_show_share_name_of_my_cook(shape_of_show, line_or_star);
                    cout << "ENTER COOK NAME TO DELETE IT :             [bb] to back one.\n";
                    string delete_ofline_cook;
                    cin >> delete_ofline_cook;
                    m_s_int.if_cook_found_return(delete_ofline_cook);

                    cout << "----------------------------------\n";
                    while (!(delete_ofline_cook == "bb" || delete_ofline_cook == "Bb" || m_s_int.is_cook_found || ((delete_ofline_cook == "Grilled" || delete_ofline_cook == "grilled") && m_s_int.i_s_1.is_it_found_1) || ((delete_ofline_cook == "Vegetable" || delete_ofline_cook == "vegetable") && m_s_int.i_s_2.is_it_found_2) || ((delete_ofline_cook == "Fruit" || delete_ofline_cook == "fruit") && m_s_int.i_s_3.is_it_found_3)))
                    {
                        cout << "unknow code ...tray again..\n";
                        cout << "ENTER COOK NAME TO DELETE IT :             [bb] to back one.\n";
                        cin >> delete_ofline_cook;
                        m_s_int.if_cook_found_return(delete_ofline_cook);
                    }
                    if (((delete_ofline_cook == "Grilled" || delete_ofline_cook == "grilled") && m_s_int.i_s_1.is_it_found_1))
                    {
                        m_s_int.display_my_cook_online_new_acount_part_1();
                        cout << "-----------------------------\n";
                        cout << "are you shore:       [yes - no]\n";
                        string delete_cook;
                        cin >> delete_cook;
                        while (!(delete_cook == "yes" || delete_cook == "Yes" || delete_cook == "no" || delete_cook == "No"))
                        {
                            cout << "unknow code..tray again\n\n";
                            cout << "-----------------------------\n";
                            cout << "are you shore to delete:       [yes - no]\n";
                            cin >> delete_cook;
                        }
                        if (delete_cook == "yes" || delete_cook == "Yes")
                        {
                            m_s_int.display_my_cook_online_new_acount_part_1();
                            goto delete_cook_online;
                        }
                        else if (delete_cook == "no" || delete_cook == "No")
                        {
                            goto delete_cook_online;

                        }
                    }
                    else if (((delete_ofline_cook == "Vegetable" || delete_ofline_cook == "vegetable") && m_s_int.i_s_2.is_it_found_2))
                    {
                        m_s_int.display_my_cook_online_new_acount_part_2();
                        cout << "-----------------------------\n";
                        cout << "are you shore:       [yes - no]\n";
                        string delete_cook;
                        cin >> delete_cook;
                        while (!(delete_cook == "yes" || delete_cook == "Yes" || delete_cook == "no" || delete_cook == "No"))
                        {
                            cout << "unknow code..tray again\n\n";
                            cout << "-----------------------------\n";
                            cout << "are you shore to delete:       [yes - no]\n";
                            cin >> delete_cook;
                        }
                        if (delete_cook == "yes" || delete_cook == "Yes")
                        {
                            m_s_int.display_my_cook_online_new_acount_part_2();
                            goto delete_cook_online;
                        }
                        else if (delete_cook == "no" || delete_cook == "No")
                        {
                            goto delete_cook_online;

                        }
                    }
                    else if ((delete_ofline_cook == "Fruit" || delete_ofline_cook == "fruit") && m_s_int.i_s_3.is_it_found_3)
                    {
                        m_s_int.display_my_cook_online_new_acount_part_3();
                        cout << "-----------------------------\n";
                        cout << "are you shore:       [yes - no]\n";
                        string delete_cook;
                        cin >> delete_cook;
                        while (!(delete_cook == "yes" || delete_cook == "Yes" || delete_cook == "no" || delete_cook == "No"))
                        {
                            cout << "unknow code..tray again\n\n";
                            cout << "-----------------------------\n";
                            cout << "are you shore to delete:       [yes - no]\n";
                            cin >> delete_cook;
                        }
                        if (delete_cook == "yes" || delete_cook == "Yes")
                        {
                            m_s_int.display_my_cook_online_new_acount_part_3();
                            goto delete_cook_online;
                        }
                        else if (delete_cook == "no" || delete_cook == "No")
                        {
                            goto delete_cook_online;

                        }
                    }
                    else if (delete_ofline_cook == "bb" || delete_ofline_cook == "Bb")
                    {
                        goto delete_cook;
                    }
                    else if (m_s_int.if_cook_found_return(delete_ofline_cook))
                    {
                        m_s_int.didsplay_the_new_cook_in_online(delete_ofline_cook);

                        cout << "-----------------------------\n";
                        cout << "are you shore:       [yes - no]\n";
                        string delete_cook;
                        cin >> delete_cook;
                        while (!(delete_cook == "yes" || delete_cook == "Yes" || delete_cook == "no" || delete_cook == "No"))
                        {
                            cout << "unknow code..tray again\n\n";
                            cout << "-----------------------------\n";
                            cout << "are you shore to delete:       [yes - no]\n";
                            cin >> delete_cook;
                        }
                        if (delete_cook == "yes" || delete_cook == "Yes")
                        {
                            m_s_int.my_cook_delete_share_name_of_cook_new_cook(delete_ofline_cook);
                            goto delete_cook_online;
                        }
                        else if (delete_cook == "no" || delete_cook == "No")
                        {
                            goto delete_cook_online;

                        }
                    }
                }

                else if (!(user_name == "a" && passowrd == "b"))
                {
                    if (m_s_int.a_new_cook_i_share_it <= 0)
                    {
                        cout << "\n\n            YOU HAVE NOT ANY COOKS YET\n\n\n";

                    }
                    else
                    {
                        m_s_int.my_cook_show_share_name_of_my_cook_a_new_account(shape_of_show, line_or_star);
                    }
                    cout << "ENTER COOK NAME TO DELETE IT :             [bb] to back one.\n";
                    string delete_ofline_cook;
                    cin >> delete_ofline_cook;
                    cout << "----------------------------------\n";
                    m_s_int.if_cook_found_return(delete_ofline_cook);
                    while (!(m_s_int.if_cook_found_return(delete_ofline_cook) || delete_ofline_cook == "bb" || delete_ofline_cook == "Bb"))
                    {
                        cout << "sorry unknow code ...\n";
                        cout << "ENTER COOK NAME TO DELETE IT :             [bb] to back one.\n";
                        cin >> delete_ofline_cook;

                        cout << "----------------------------------\n";

                        while (delete_ofline_cook.empty())
                        {
                            cout << "entering can not be empty....tray again\n";
                            cout << "ENTER COOK NAME TO DELETE IT :             [bb] to back one.\n";
                            cin >> delete_ofline_cook;
                            cout << "----------------------------------\n";

                        }
                        m_s_int.if_cook_found_return(delete_ofline_cook);
                    }
                    if (m_s_int.if_cook_found_return(delete_ofline_cook))
                    {
                        m_s_int.didsplay_the_new_cook_in_online(delete_ofline_cook);
                        cout << "-----------------------------\n";

                        cout << "are you shore:       [yes - no]\n";
                        string delete_cook;
                        cin >> delete_cook;
                        while (!(delete_cook == "yes" || delete_cook == "Yes" || delete_cook == "no" || delete_cook == "No"))
                        {
                            cout << "unknow code..tray again\n\n";
                            cout << "-----------------------------\n";
                            cout << "are you shore to delete:       [yes - no]\n";
                            cin >> delete_cook;
                        }
                        if (delete_cook == "yes" || delete_cook == "Yes")
                        {
                            m_s_int.my_cook_delete_share_name_of_cook_new_cook(delete_ofline_cook);
                            goto delete_cook_ofline;
                        }
                        else if (delete_cook == "no" || delete_cook == "No")
                        {
                            goto delete_cook_online;

                        }
                    }
                    else if (delete_ofline_cook == "bb" || delete_ofline_cook == "Bb")
                    {
                        goto delete_cook;
                    }


                }
            }
        }
        else if (th_sh_su == "us" || th_sh_su == "Us")
        {
        about_us_head:
            cout << "------------------------\n";
            cout << "ABOUT THE APPLICATION:           [ap]           [bb] to back\n";
            cout << "ABOUT THE BROGRAMMER:            [br]\n\n";
            string about_us;
            cin >> about_us;
            while (!(about_us == "ap" || about_us == "Ap" || about_us == "br" || about_us == "Br" || about_us == "bb" || about_us == "Bb"))
            {
                cout << "unknow code....tray again\n";
                cout << "------------------------\n";
                cout << "ABOUT THE APPLICATION:           [ap]           [bb] to back\n";
                cout << "ABOUT THE BROGRAMMER:            [br]\n\n";
                cin >> about_us;
            }
            cout << "------------------------\n";
            if (about_us == "ap" || about_us == "Ap")
            {
                cout << "Share Me Your Cooks\n is a professional social cooking application built to connect food enthusiasts\nand home chefs in one interactive platform.\nThe app provides an offline feature that allows users to save\nand organize their personal recipes securely, ensuring access at any time without the need for an internet connection.\nThrough the online community, users can share their cooking creations on their own profiles, explore recipes\nfrom other chefs, follow their culinary journeys, and interact through comments and feedback.\nThe platform also includes a rating system that enables users to evaluate dishes\nview chefs’ ratings, and receive evaluations on their own recipes\nThis creates a trusted and engaging environment that encourages creativity, learning, and sharing experiences among cooking lovers worldwide.\n";
                cout << "\nprres [bb] to back\n";
                string back_about_us;
                cin >> back_about_us;
                while (!(back_about_us == "bb" || back_about_us == "Bb"))
                {
                    cout << "unknow code....tray again\n";
                    cout << "prres [bb] to back\n";
                    cin >> back_about_us;

                }
                if (back_about_us == "bb" || back_about_us == "Bb")
                {
                    goto about_us_head;
                }


            }
            else if (about_us == "br" || about_us == "Br")
            {
                cout << "NAME: \"FOUR DOLAR\"\n\n";

                cout << "I am a software programmer specializing exclusively in \"C++\".\n";
                cout << "My passion for programming started at a young age, and I see it as a true form of expression and creativity.\n";
                cout << "My academic journey began at the university level with simple projects that built my foundation step by step.\n\n";

                cout << "VISION: \"PROGRAMMING IS A SPACE FOR EXPRESSION\"\n";
                cout << "SLOGAN: \"USER ENJOYMENT IS THE PROGRAMMER'S GOAL\"\n";
                cout << "BELIEF: \"PASSION IS NOT STOPPED BY DIFFICULT CIRCUMSTANCES\"\n\n";

                cout << "PROJECTS:\n";
                cout << "----------------------------------------\n";

                cout << "[SOCIAL COMMUNICATION]\n";
                cout << "\"SHARE ME YOUR COOKS\"\n";
                cout << "A social cooking application that connects cooks worldwide,\n";
                cout << "helps showcase their creativity, protect their innovations,\n";
                cout << "and preserve their recipes with clear ownership rights.\n\n";

                cout << "[E-COMMERCE]\n";
                cout << "\"M.A.H\"\n";
                cout << "An e-commerce platform designed to simplify global trade,\n";
                cout << "help sellers display and sell products internationally,\n";
                cout << "and allow users to access top brands with competitive prices\n";
                cout << "and continuous offers.\n\n";

                cout << "[BANKING]\n";
                cout << "\"MINI BANKING SYSTEM\"\n";
                cout << "A simplified banking solution focused on accessibility\n";
                cout << "and essential financial services.\n\n";

                cout << "[HEALTHCARE]\n";
                cout << "\"NEARBY HOSPITAL\"\n";
                cout << "An application that helps users find nearby hospitals,\n";
                cout << "view doctors' schedules, book appointments,\n";
                cout << "check visiting hours, explore available medical equipment\n";
                cout << "with their features, and view supervisors' profiles\n";
                cout << "and CVs to ensure transparency,\n";
                cout << "along with many additional features.\n";
                cout << "\nprres [bb] to back\n";
                string back_about_us;
                cin >> back_about_us;
                while (!(back_about_us == "bb" || back_about_us == "Bb"))
                {
                    cout << "unknow code....tray again\n";
                    cout << "prres [bb] to back\n";
                    cin >> back_about_us;

                }
                if (back_about_us == "bb" || back_about_us == "Bb")
                {
                    goto about_us_head;
                }
            }
            else if (about_us == "bb" || about_us == "Bb")
            {
                goto siting;
            }
        }
    }
    if (choos == "ex" || choos == "Ex")
    {
        cout << "are you sure?         [no,yes]\n";
        string sure_exit;
        cin >> sure_exit;
        if (sure_exit == "no" || sure_exit == "No")
        {
            goto the_main_list;
        }
    }
}

