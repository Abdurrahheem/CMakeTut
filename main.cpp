#include <iostream>
#include <GLFW/glfw3.h>
#include <OLASConfig.h>

#ifdef USE_ADDER
    #include <adder.h>
#endif

int main(int argc, char* argv[]){
    std::cout << "Hey, its me again, adding real numbers \n";
#ifdef USE_ADDER
    std::cout << "NEW Sum of two " << add(72.1f, 72.8f) << "\n"; 
#else
    std::cout << "Old Sum of two " << 72.1f + 72.8f << "\n"; 
#endif
    std::cout << argv[0] << " Version " << OLAS_VERSION_MAJOR << "." << OLAS_VERSION_MINOR << "\n";

    
    GLFWwindow* window;
    int width, height;
    width = 1200;
    height = 800;
    std::cout << "Height: " << height << "\n" << "Width: " << width << "\n";

    if( !glfwInit() )
    {
        fprintf( stderr, "Failed to initialize GLFW\n" );
        exit( EXIT_FAILURE );
    }

    window = glfwCreateWindow(width, height, "Gears", NULL, NULL);

    if (!window)
    {
        fprintf( stderr, "Failed to open GLFW window\n" );
        glfwTerminate();
        exit( EXIT_FAILURE );
    }

    while( !glfwWindowShouldClose(window) )
    {
        // Draw gears
        // draw();

        // Update animation
        // animate();

        // Swap buffers
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // Terminate GLFW
    glfwTerminate();

    return 0;


}