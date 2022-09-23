#include <iostream>
#include <string>

using namespace std;

class YouTubeChannel {
    private:
        string Name;
        int SubscriberCount;

    public:
        YouTubeChannel(string name, int subscriberCount) {
            Name = name;
            SubscriberCount = subscriberCount;
        }
};

int main() {
    
    YouTubeChannel yt1 = YouTubeChannel("CodeBeauty", 75000);

    cout << yt1;
    
    return 0;
}