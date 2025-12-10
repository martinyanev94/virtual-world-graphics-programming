ModelAndInstanceData treeInstances(treeModelID, maxTrees);
for (int i = 0; i < numberOfTrees; ++i) {
    glm::mat4 modelMatrix = glm::translate(glm::mat4(1.0f), glm::vec3(i * 2.0f, 0.0f, 0.0f));
    treeInstances.addInstance(modelMatrix);
}
