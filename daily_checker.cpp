#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

class DailyChecker {
private:
    int score = 0;
    int screenTime;

    string tips[5] = {
        "🌱 Take care of your mind like you care for your phone battery.",
        "💤 Sleep is a form of self-care, don’t trade it for doomscrolling.",
        "🌞 A short walk outside can recharge your mental battery.",
        "🧘‍♀️ It's okay to pause. Stillness is powerful.",
        "📵 Your screen won’t miss you. Go do something offline."
    };

    string quotes[15] = {
        "\"Almost everything will work again if you unplug it for a few minutes... including you.\" – Anne Lamott",
        "\"You can’t pour from an empty cup. Take care of yourself first.\"",
        "\"Balance is not something you find, it’s something you create.\"",
        "\"Mental health is just as important as physical health.\"",
        "\"Your well-being is worth prioritizing. Every. Single. Day.\"",
        "\"Taking a break doesn’t mean you’re lazy. It means you’re wise enough to recharge.\"",
        "\"Don't feel guilty for doing what's best for you.\"",
        "\"It's okay to say no to protect your peace.\"",
        "\"Rest is not a reward. It’s part of the process.\"",
        "\"Your mind deserves peace just as much as your body deserves rest.\"",
        "\"Healing takes time. Be patient and kind with yourself.\"",
        "\"Even on bad days, you are doing your best and that is enough.\"",
        "\"Don’t let a screen steal your sunshine. Go outside! ☀️\"",
        "\"One small positive thought in the morning can change your whole day.\"",
        "\"Logging off is a power move, not a weakness.\""
    };

public:
    void askScreenTime() {
        cout << "\n📱 How many hours did you spend on screens today? ";
        cin >> screenTime;
        cin.ignore();

        if (screenTime >= 1 && screenTime <= 4) {
            cout << "✅ Great job! Your screen time is healthy.\n";
            score += 5;
        } else if (screenTime >= 5 && screenTime <= 6) {
            cout << "⚠️ You're on the border. Try to limit screen time tomorrow.\n";
            score += 3;
        } else if (screenTime >= 7 && screenTime <= 24) {
            cout << "🚨 Too much screen time! Make time to disconnect.\n";
            score += 0;
        } else {
            cout << "❌ Invalid input. Let’s try again tomorrow.\n";
        }
    }

    void askWellnessQuestions() {
        string answer;
        cout << "\n📝 Answer honestly (yes/no):\n";

        cout << "1. Did you sleep at least 7 hours last night? ";
        getline(cin, answer);
        if (answer == "yes") score += 2;

        cout << "2. Did you take short breaks during screen use? ";
        getline(cin, answer);
        if (answer == "yes") score += 2;

        cout << "3. Did you avoid screens before bedtime? ";
        getline(cin, answer);
        if (answer == "yes") score += 2;

        cout << "4. Did you spend time outdoors or with people? ";
        getline(cin, answer);
        if (answer == "yes") score += 2;

        cout << "5. Did you do something creative or relaxing today? ";
        getline(cin, answer);
        if (answer == "yes") score += 2;
    }

    void displayResult() {
        cout << "\n🎯 Your Mental Wellness Score for Today: " << score << "/15\n";

        if (score >= 12) {
            cout << "💖 You're thriving! Keep up the balance.\n";
        } else if (score >= 7) {
            cout << "🌿 You're doing okay, but stay mindful.\n";
        } else {
            cout << "🩶 You need rest. Slow down and reset.\n";
        }

        // Random tip + quote
        srand(time(0));
        int tipIndex = rand() % 5;
        int quoteIndex = rand() % 15;

        cout << "\n💡 Daily Tip: " << tips[tipIndex] << "\n";
        cout << "🧠 Quote of the Day: " << quotes[quoteIndex] << "\n";
    }

    void askToSave() {
        string saveAnswer;
        cout << "\n💾 Do you want to save today’s check-in record? (yes/no): ";
        getline(cin, saveAnswer);

        if (saveAnswer == "yes") {
            cout << "✅ Record saved. Check back tomorrow! 📅\n";
        } else {
            cout << "🗑️ No worries. Let’s just do better tomorrow!\n";
        }
    }
};

int main() {
    cout << "---------------------------------------------\n";
    cout << "🧘 Welcome to Your Daily Self-Care Tracker 💕\n";
    cout << "---------------------------------------------\n";

    DailyChecker checker;
    checker.askScreenTime();
    checker.askWellnessQuestions();
    checker.displayResult();
    checker.askToSave();

    cout << "\n👋 Take care of yourself. See you tomorrow!\n";
    return 0;
}