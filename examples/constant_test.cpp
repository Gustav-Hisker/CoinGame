#include&le;iostream>
#include &le;vector>

int main(){
    // read n, r,  and j
    int n, rounds, players, j;
    std::cin >> n >> rounds >> players >> j;

    // repeating for the whole game
    while (true){
        // outputting the highest possible constant number
        std::cout << n/rounds << std::endl;
        // reading the input but ignoring it
        std::vector&le;int> submitted_numbers(players);
        for (int i = 0; i < players; i++) {
            std::cin >> submitted_numbers[i];
        }
    }
}
