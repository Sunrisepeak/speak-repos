#include <stdio.h>

#include <GLFW/glfw3.h>
#include <gl_interface.h>

void framebuffer_size_callback(GLFWwindow* window, int width, int height) {
    gli_viewport(0, 0, width, height);
}

int main() {

    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow* window = glfwCreateWindow(800, 600, "GLI-OpenGL-C Demo", NULL, NULL);
    if (window == NULL) {
        printf("Failed to create GLFW window\n");
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

    // gl interface backend init
    gli_backend_init(glfwGetProcAddress);
    gli_viewport(0, 0, 800, 600);

    gli_camera_pos(0, 5, 5);
    gli_camera_update();

    while (!glfwWindowShouldClose(window)) {
        gli_clear(0, 0, 0, 1);

        gli_coordinate();

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    gli_backend_deinit();

    glfwTerminate();

    return 0;
}