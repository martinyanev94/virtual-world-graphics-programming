void applyAdditiveBlending(Character& character, Animation& headAnimation) {
    // Assuming `character` contains a method for applying animations
    character.animator.applyAnimation(character.mainAnimation);
    
    // Now apply head animation with additive blending
    character.animator.applyAdditiveAnimation(headAnimation);
}
