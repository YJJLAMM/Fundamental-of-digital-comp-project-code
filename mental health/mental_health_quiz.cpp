#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <random>

using namespace std;

class MentalHealthQuiz {
private:
    int score = 0;

    vector<string> questions = {
        "Do you feel rested when you wake up?",
        "Have you gone outside today?",
        "Have you had enough water today?",
        "Did you take breaks during screen time?",
        "Did you avoid screens before bed?",
        "Did you get at least 7 hours of sleep?",
        "Did you do any physical activity today?",
        "Did you do something that made you smile today?",
        "Did you spend time off your phone for at least an hour?",
        "Did you resist comparing yourself to others online?",
        "Did you talk to someone (even a quick chat)?",
        "Did you avoid doomscrolling or mindless scrolling?",
        "Did you eat at least one proper meal today?",
        "Did you listen to your body and rest when needed?",
        "Did you express gratitude today?",
        "Did you take deep breaths when feeling anxious?",
        "Did you check in with your emotions today?",
        "Did you avoid multitasking during screen time?",
        "Did you make space for creativity today?",
        "Did you do something kind for yourself today?"
    };

    vector<string> affirmations = {
        "✨ You’re doing better than you think.",
        "🌈 Progress isn't always loud. You're still growing.",
        "💗 The fact that you're checking in means you care.",
        "☀️ One step at a time, you're getting there.",
        "🌱 Healing is not linear, and that’s okay.",
        "🧘‍♀️ Rest is productive. Please don’t forget that.",
        "🚀 Small wins still count. Always.",
        "💬 Be gentle with yourself today.",
        "🌻 You’re not alone in this journey.",
        "📴 Sometimes logging off is self-love."
    };

public:
    void startQuiz() {
        cout << "----------------------------------------------------------\n";
        cout << "💡 Ultimate Mental Health & Screen Time Check-In (6Qs) 💡\n";
        cout << "----------------------------------------------------------\n";
        cout << "Just answer with 'yes' or 'no'. Be honest, no pressure. 🧠\n";

        // Shuffle the questions using modern C++ method
        random_device rd;
        mt19937 g(rd());
        shuffle(questions.begin(), questions.end(), g);

        string answer;
        for (int i = 0; i < 6; i++) {
            cout << "\nQ" << i + 1 << ": " << questions[i] << " (yes/no): ";
            getline(cin, answer);
            if (answer == "yes" || answer == "Yes") {
                score++;
            }
        }

        displayResult();
    }

    void displayResult() {
        cout << "\n🎯 You scored " << score << "/6 on your self-check today.\n";

        if (score == 6) {
            cout << "💖 You’re glowing. Keep riding that wave!\n";
        } else if (score >= 4) {
            cout << "🌿 Doing good! Stay kind to yourself.\n";
        } else if (score >= 2) {
            cout << "🩶 Little off today? That’s okay. Tomorrow’s a new day.\n";
        } else {
            cout << "🕊️ Low energy day. Breathe. Reset. You’ve got this.\n";
        }

        // Random affirmation
        srand(time(0));
        int index = rand() % affirmations.size();
        cout << "\n🌟 Affirmation of the Day:\n" << affirmations[index] << "\n";

        cout << "\nThanks for checking in 💕 Your mental health matters.\n";
    }
};

int main() {
    MentalHealthQuiz quiz;
    quiz.startQuiz();

    cout << "\n👋 Sending you peace, snacks, and screen-free joy. Byeee!\n";
    return 0;
}