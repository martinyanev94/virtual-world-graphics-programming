class AdditiveAnimation {
public:
    AdditiveAnimation(std::string name, std::function<void()> animationFunc) 
        : name(name), animationFunc(animationFunc) {}

    void play() {
        animationFunc();
    }

private:
    std::string name;
    std::function<void()> animationFunc;
};

class Character {
public:
    void addAdditiveAnimation(AdditiveAnimation* addAnim) {
        additiveAnimations.push_back(addAnim);
    }

    void playAdditiveAnimation(std::string name) {
        for (auto& anim : additiveAnimations) {
            if (anim->getName() == name) {
                anim->play();
                break;
            }
        }
    }

private:
    std::vector<AdditiveAnimation*> additiveAnimations;
};
