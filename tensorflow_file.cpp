#include <iostream>
#include <tensorflow/c/c_api.h>

int main() {

    TF_Status* status = TF_NewStatus();
    TF_SessionOptions* sessionOptions = TF_NewSessionOptions();
    TF_Graph* graph = TF_NewGraph();
    TF_Session* session = TF_NewSession(graph, sessionOptions, status);

    if (TF_GetCode(status) != TF_OK) {
        std::cerr << "Error initializing TensorFlow: " << TF_Message(status) << std::endl;
        TF_DeleteStatus(status);
        TF_DeleteGraph(graph);
        TF_DeleteSessionOptions(sessionOptions);
        return 1;
}

    const int numValues = 2;
    const int numInputs = 1;
    const int numOutputs = 1;







