#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to give a personalized affirmation
void giveAffirmation(string mood, int stress, int energy) {
    srand(time(0));

    string affirmations[6][6] = {
        // Happy
        {
            "Keep shining, your joy is contagious ✨",
            "You’re glowing inside out — stay that way 🌈",
            "Soak in the good moments. You’ve earned them 💛",
            "Your vibe uplifts others, even if you don’t notice 💫",
            "Stay grounded in your joy 🌿",
            "Celebrate yourself, even for the small wins 🎉"
        },
        // Tired
        {
            "Rest isn’t lazy — it’s necessary 🌙",
            "You’re allowed to pause and just be 🛌",
            "Your effort still counts, even if you’re exhausted 💖",
            "Take a breath. You don’t need to do it all today 🍃",
            "Refill your cup. The world can wait 🫖",
            "It’s okay to slow down and simply exist ☁️"
        },
        // Anxious
        {
            "You are safe. You are strong. This moment will pass 🧘‍♀️",
            "You’re doing your best — and that’s enough 💙",
            "Inhale peace, exhale stress 🌬️",
            "Don’t believe everything your anxiety tells you 🧠",
            "You’ve made it through hard days before — you’ve got this 💪",
            "One thought at a time. One step at a time 💫"
        },
        // Sad
        {
            "Feel it fully, then let it flow away 🌊",
            "Your sadness is valid, but it doesn’t define you 🌧️",
            "You are not alone, even if it feels that way 🤍",
            "Healing takes time — be gentle with yourself 🫂",
            "You matter more than you know 💗",
            "This moment will pass, and you will rise again ☀️"
        },
        // Angry
        {
            "Your emotions are valid — just don’t let them burn you out 🔥",
            "It’s okay to step away and breathe 🌬️",
            "You deserve peace, not pressure ⚖️",
            "You are more than this moment 🧩",
            "Speak your truth, but protect your peace 🕊️",
            "Anger is energy. You get to choose where it goes 💥"
        },
        // Meh
        {
            "It’s okay to feel ‘meh’ — not every day has to be deep ☁️",
            "You’re allowed to simply exist and take up space 🤍",
            "Even a ‘blah’ day is part of your growth 🌱",
            "Progress still counts, even when it’s quiet 📈",
            "Just showing up is something to be proud of 🏁",
            "Nothing is wrong with needing rest, space, or nothingness 🪐"
        }
    };

    int moodIndex = 0;

    if (mood == "happy") moodIndex = 0;
    else if (mood == "tired") moodIndex = 1;
    else if (mood == "anxious") moodIndex = 2;
    else if (mood == "sad") moodIndex = 3;
    else if (mood == "angry") moodIndex = 4;
    else moodIndex = 5; // default to "meh"

    cout << "\n✨ Your Affirmation: " << affirmations[moodIndex][rand() % 6] << "\n";
}

int main() {
    string name, mood;
    int stressLevel, energyLevel;

    cout << "--------------------------------------------\n";
    cout << " 💬 Welcome to Your Daily Affirmation Tool 💬\n";
    cout << "--------------------------------------------\n";

    cout << "What’s your name? ";
    getline(cin, name);

    cout << "How would you describe your current mood? (happy/tired/anxious/sad/angry/meh): ";
    cin >> mood;

    cout << "On a scale of 1–10, how stressed are you? ";
    cin >> stressLevel;

    cout << "And your energy level today? (1–10): ";
    cin >> energyLevel;

    cout << "\nThanks for checking in, " << name << " 🫶";
    giveAffirmation(mood, stressLevel, energyLevel);

    cout << "\n--------------------------------------------\n";
    cout << " Take what you need & come back anytime 🌙\n";
    cout << "--------------------------------------------\n";

    return 0;
}

