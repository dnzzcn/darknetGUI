# Darknet GUI (v0.1.7)

Darknet GUI is a tool to train, test and analyze classifier networks by using Darknet framework. It currently works on 64-bit 
Linux with CUDA 8.0. 

## Using Darknet GUI

1. Clone the repository to your working directory by using the following command:

   ```bash
   git clone https://github.com/dnzzcn/darknetGUI
   ```
   Or directly download it as a ZIP file and extract it to any directory you want.

2. Run the program with the command:

   ```bash
   ./darknetGUI
   ```
   
   If you cannot train the network due to a memory fault, try running the program with root privileges:
   
   ```bash
   sudo ./darknetGUI
   ```
   
3. Create a Darknet project by choosing 'New Project' from the File menu.

4. Choose a name for your project, then specify the '.cfg' file, 'labels' file, and the 'train' and 'test' files that list 
paths for images of your dataset. Click 'Create' to create the project.

5. You can now start to use the Training Tool. A further explanation is provided with a question mark symbol near the title of
the tool.

## Release Notes (v0.1.7)

* Dependencies are now packed and the program runs standalone.
* FIX: Final Darknet release is now built for sm 30, sm35, sm50, sm52 and sm61 architectures.

## Release Notes (v0.1.5)

* Darknet GUI currently supports the 'Training Tool'. With this tool, you can train a classifier network from scratch 
with determined hyperparameters, or continue training over a backup weight. You can also analyze the average loss of the network 
over the training data, and the accuracy of the network over the test data, in real time. The detailed performance analysis of
each weight over the test data will be saved under 'accuracy' folder in the Darknet GUI directory, where you can see individual
class prediction performances of each tested weight, with which you can build a confusion table.

### Future Work

* **Dataset Tool:** A tool to create a dataset for a Darknet GUI project. You can apply available augmentation methods to 
your data with specified parameters.

* **Test Tool:** A tool to test previously obtained weights over a specified test data. It also saves the detailed results under
the 'accuracy' directory for future analysis.

* **Analysis Tool:** A tool to visualize the existing accuracy results. It will show the overall performance and the class
performances of the weights in a graphical interface.

* **Prediction Tool:** A tool that allows you to choose an input image and check the prediction of the network for that image.

### Known Issues

* Darknet GUI currently supports single GPU training.
* Train and test images need to be resized to the input of the network while preparing the dataset. The performance of 
the network dramatically reduces, otherwise.
