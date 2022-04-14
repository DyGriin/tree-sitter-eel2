; highlights.scm

(function_def "function" @keyword)
(function_def
    (_ ["global" "globals" "local" "static" "instance"] @keyword))
(function_call name: (identifier) @keyword (#eq? @keyword "loop"))
(while "while" @keyword)

(function_def name: (identifier) @function)
(function_call name: (identifier) @function)

[(identifier) (string_identifier)] @variable

(assignment op: _ @operator)
(unary op: _ @operator)
(binary op: _ @operator)
(conditional ["?" ":"] @operator)

(string) @string
(number) @number
(comment) @comment