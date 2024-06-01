# Hemtt Template

## Intro

In this template I've included a few things to help you get started. The `example` folder is a simple example of a project structure. The `tools` folder contains a bat file to install Hemtt. The `.hemtt\project.toml` file is a template for your project configuration. 

This template is very opinionated and assumes a project structure like `P:/z/{Project Name}`. While Hemtt does not require a P drive I recommend it to save yourself a headache down the line if you're working with p3ds.

For more information on Hemtt check out the [Hemtt Documentation](https://brettmayson.github.io/HEMTT/).

GitHub: [Hemtt](https://github.com/BrettMayson/HEMTT)

## P Drive

If you do not already have a P drive you can mount one using Arma 3 Tools or Mikeros Tools Arma3P. You can also use subst to create a virtual drive.

```bat
subst P: "C:\Path\To\Your\Project Folder"
```

## Create Z Folder

Create a folder named `z` in your project folder. This is where all your projects will get stored. You can create this folder using the following command in your terminal, command prompt, or right click in the file explorer and create a new folder.

```bat
mkdir P:\z
```

## Clone Template

Clone this template into your project folder.

```bat
git clone https://github.com/liamcannon/Hemtt-Template.git {Your Project Name}
```

Adding `{Your Project Name}` at the end will create a folder with that name. 

## Rename Template

There's a few places in the template you'll have to rename before you can start using it. Look for `TAG`, `Your Name`, `Project Name` and replace them with your own values. Files like `script_component.hpp`, `$PBOPREFIX$`, and `project.toml` are some examples for places to take a look at.

Example:
```
z\TAG\addons\example -> z\TestProject\addons\example
```

Where `TAG` is the name of the folder you cloned the template into.

## Install Hemtt

Run the bat file inside `/tools/` to install Hemtt. This will install `hemtt.exe` into your project folder.

## Build

To build the project open your terminal and navigate to your project folder. Run the following command:

```bat
./hemtt.exe build
```

This will build your project and output the pbo files to the `P:\z\TAG\.hemttout\build` folder.

#

*Last Updated: 2024-05-23*
