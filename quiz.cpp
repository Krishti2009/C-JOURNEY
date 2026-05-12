#include <iostream>
#include <string>
int main()
{
    int score = 0;
    char ch;
    std::string questions[] =
        {
            "1.Who discovered Pluto?",
            "2.Who is ironman?",
            "3.who discovered black hole?"};
    std::string options[][4] = {
        {"A. Galileo Galilei", "B. Nicolaus Copernicus", "C. Clyde Tombaugh", "D.Edwin Hubble"},
        {"A. Thor", "B. Bruce Wayne", "C. Tony Stark", "D. Steve Rogers"},
        {"A. Isaac Newton", "B. Karl Schwarzschild", "C. Galileo Galilei", "D. Nikola Tesla"}};
    char answer[] = {'C', 'C', 'B'};
    for (int i = 0; i < 3; i++)
    {
        std::cout << questions[i];
        for (int j = 0; j < 4; j++)
        {
            std::cout << options[i][j] << '\n';
        }
        std::cout << "Choose answer:";
        std::cin >> ch;
        if (ch == answer[i])
        {
            score++;
        }
    }
    std::cout << "Your score is:" << score;
    return 0;
}
