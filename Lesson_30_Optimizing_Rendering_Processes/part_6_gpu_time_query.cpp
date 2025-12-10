GLuint query;
glGenQueries(1, &query);
glBeginQuery(GL_TIME_ELAPSED, query);

// Rendering operations

glEndQuery(GL_TIME_ELAPSED);
GLuint timeElapsed;
glGetQueryObjectui(query, GL_QUERY_RESULT, &timeElapsed);
