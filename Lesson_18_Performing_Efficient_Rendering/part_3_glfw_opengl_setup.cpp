// Initialize GLFW
if (!glfwInit()) {
    logError("Failed to initialize GLFW.");
    return false;
}

// Create a windowed mode window and its OpenGL context
GLFWwindow* window = glfwCreateWindow(640, 480, "3D Scene", NULL, NULL);
if (!window) {
    glfwTerminate();
    logError("Failed to create GLFW window.");
    return false;
}

// Make the window's context current
glfwMakeContextCurrent(window);
glViewport(0, 0, 640, 480);
GLuint compileShader(const char* source, GLenum shaderType) {
    GLuint shader = glCreateShader(shaderType);
    glShaderSource(shader, 1, &source, NULL);
    glCompileShader(shader);
    
    // Check for compilation errors
    GLint success;
    glGetShaderiv(shader, GL_COMPILE_STATUS, &success);
    if (!success) {
        logError("Shader compilation failed.");
    }
    return shader;
}
GLuint vertexShader = compileShader(vertexShaderSource, GL_VERTEX_SHADER);
GLuint fragmentShader = compileShader(fragmentShaderSource, GL_FRAGMENT_SHADER);

GLuint shaderProgram = glCreateProgram();
glAttachShader(shaderProgram, vertexShader);
glAttachShader(shaderProgram, fragmentShader);
glLinkProgram(shaderProgram);
