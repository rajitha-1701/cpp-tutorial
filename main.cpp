#include "queues.hpp"
#include "gui.hpp"
#include "imgui/imgui_demo.cpp"
// GUI APPLICATION
int main(){

    ImGui::ShowDemoWindow();
    queues::Gui gui;
    queues::Queues q(100);
    q.push(10);
    q.push(11);
    q.push(12);
    q.display();
    q.top();
    q.pop();
    q.display();
    
    return 0;
}