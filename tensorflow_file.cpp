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
    const int inputSize = numValues * numInputs;
    const int outputSize = numValues * numOutputs;

    TF_Output inputs[numInputs];
    TF_Output outputs[numOutputs];
    inputs[0].oper = TF_GraphOperationByName(graph, "input");
    inputs[0].index = 0;
    outputs[0].oper = TF_GraphOperationByName(graph, "output");
    outputs[0].index = 0;

    TF_SessionRun(session,
nullptr,
inputs, inputs, 1,
outputs, outputs, 1,
nullptr, 0, 
nullptr,
