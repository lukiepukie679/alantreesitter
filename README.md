# Alan Treesitter Capstone Project

## Introduction
In this capstone project the goal is to integrate tree-sitter to understand alan in which a ide through neovim is created. This project aims to firstly parse alan in a treesitter file grammar.js, and through this file generate the parser, in parser.c. Through this a parser can be created in order to understand the language. The goal of this project is to make this parser represent the code provided in a tree-sitter text format of the rules it uses. 

## Treesitter

Treesitter is an essential component of the Neovim Treesitter IDE project due to its unique capabilities. Treesitter is a parser generator that is designed to be general enough to parse any programming language, making it suitable for a wide range of development tasks. Additionally, it is remarkably fast, capable of parsing code on every keystroke in a text editor, ensuring a smooth and responsive experience for developers, using the power of incremental parsing. Despite its speed, Treesitter remains robust, providing useful results even in the presence of syntax errors, using the power of partial parsing. Furthermore, Treesitter is dependency-free, written in pure C, allowing it to be easily embedded into any application, including Neovim, without introducing external dependencies.

## Alan

Alan is the simple coding language used for this project. It follows a simple grammar structure and is written in c. Alan makes use of integers, booleans, while loops and if elsif else staments. Through this it is a language that allows basic coding practises and the use of a tree sitter text file to track code would be severerly beneficial. 

## Goals and Outcomes 

### Goals
The primary goal of this project is to integrate Treesitter with the Alan programming language, enabling seamless parsing and analysis of Alan source code within the Neovim environment. Achieving accurate parsing is crucial, as it lays the foundation for advanced IDE features like syntax highlighting, code navigation, and error checking, which will ultimately enhance the development experience for Alan programmers.

### Steps to follow
- Develop a tree-sitter grammar for the Alan programming language.
- Generate a parser using the tree-sitter grammar.
- Implement syntax highlighting for Alan code in Neovim using the generated parser.
- Implement highlights.scm, and tags.scm to highlight certain tokens and rules in the language which is also used by TSPlayGroundToggle, which allows a parsing representation of the code. 
- Integrate the parser with Neovim to enable code analysis and error checking.
- Provide error checking and diagnostics for Alan code, highlighting syntax errors and potential issues.
- Improve the overall development experience for Alan programmers using Neovim and the integrated Treesitter parser.

### Outcomes
The volume of this project was imense for one person, in which it was done, however the project got close to perfection.
- A tree-sitter grammar for the Alan programming language was developed.
- A parser was generated using the tree-sitter grammar.
- Syntax highlighting for Alan code in Neovim was implemented using the generated parser.
- Highlights.scm was implemented to highlight certain tokens and rules in the language. However the neovim installed did not read the highlights. 

## Conclusion

The Neovim Treesitter IDE for the Alan programming language represents a significant step towards providing developers with a robust and efficient coding experience within the Neovim environment. By integrating Treesitter, a powerful parser generator, this project has laid the groundwork for advanced IDE features that can significantly enhance the development workflow for Alan programmers.
Through the successful development of a Treesitter grammar for Alan and the generation of a corresponding parser, the project has achieved its primary goal of enabling seamless parsing and analysis of Alan source code. This achievement paves the way for future enhancements, such as syntax highlighting, code navigation, and error checking, which will further improve the overall development experience.
While the project faced challenges and limitations, the outcomes demonstrated the feasibility and potential of integrating Treesitter with the Alan language within the Neovim ecosystem. The implementation of syntax highlighting and the exploration of additional features showcased the versatility and power of Treesitter in enhancing the development experience.
Moving forward, this project lays the groundwork for further advancements in the integration of Treesitter with the Alan language and the Neovim environment. Continued development and refinement of the parser, syntax highlighting, and other IDE features will contribute to a more streamlined and efficient development workflow for Alan programmers, ultimately fostering productivity and code quality.

## To run code 

To run the code make sure you have the tree-sitter-cli installed. If you do not install it [here](https://www.npmjs.com/package/tree-sitter-cli) or [here](https://crates.io/crates/tree-sitter-cli). You can use rust or npm (relatively).
To parse your file run this in the CAPSTONE project
```
cd alan-treesitter
tree-sitter generate 
tree-sitter parse <file>
```

Next the github configs I used were from [this github repo](https://github.com/jjvraw/dotfiles) and used the nvim files in .config and you just have to make sure you have this code in your init.lua:
```
local parser_config = require "nvim-treesitter.parsers".get_parser_configs()
parser_config.alan = {
  install_info = {
    highlight = {
        enable = true,
        additional_vim_regex_highlighting = false,
    },
    url = "~/Documents/alantreesitter", -- local path or git repo
    files = {"src/parser.c"}, -- note that some parsers also require src/scanner.c or src/scanner.cc
    -- optional entries:
    branch = "main", -- default branch in case of git repo if different from master
    generate_requires_npm = false, -- if stand-alone parser without npm dependencies
    requires_generate_from_grammar = false, -- if folder contains pre-generated src/parser.c
  },
  filetype = "alan", -- if filetype does not match the parser name
}
```
Just make sure to update the url to the right location on your computer.