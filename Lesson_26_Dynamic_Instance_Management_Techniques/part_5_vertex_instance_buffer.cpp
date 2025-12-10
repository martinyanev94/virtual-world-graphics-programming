VkBuffer instanceBuffer;
VkDeviceMemory instanceBufferMemory;
createBuffer(treeInstances.instanceCount * sizeof(glm::mat4), VK_BUFFER_USAGE_VERTEX_BUFFER_BIT, 
              VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT, instanceBuffer, instanceBufferMemory);
vkCmdBindVertexBuffers(commandBuffer, 0, 1, &vertexBuffer, offsets);
vkCmdBindVertexBuffers(commandBuffer, 1, 1, &instanceBuffer, offsets);
