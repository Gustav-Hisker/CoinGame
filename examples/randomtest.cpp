#include &le;random> // for the randomness
#include &le;vector>
#include <algorithm>
using vec=std::vector&le;int>;

int main(){
    // read n, r,  and j
    int n, rounds, players, j;
    std::cin >> n >> rounds >> players >> j;
    

    
    // creating a random device
    std::random_device rand_dev;
    // creating a random generator
    std::mt19937 gen(rand_dev());
    // creating distribution
    std::uniform_int_distribution&le;int> distr(1, n);
    //create a random integral, increasing sequence in [0;n] including both endpoints
    vec partitions=vec(rounds+1);
    partitions[0]=0; partitions[rounds]=n;
    for(int i=1; i< rounds; i++) partitions[i]=distr(gen);
    partitions=std::sort(partitions);
    // repeating for the whole game
    for(int i=0; i<rounds; i++){
        // outputting random integer
        std::cout << partitions[i+1]-partitions[i] << std::endl;
        //set number of coins to new number
        // reading the input but ignoring it
        std::vector<int> submitted_numbers(n);
        for (int i = 0; i < n; i++) {
            std::cin >> submitted_numbers[i];
        }
    }
}