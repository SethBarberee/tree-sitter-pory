; Borrowed some base highlighting groups from 
; https://github.com/Shirk/vim-gas/blob/2ca95211b465be8e2871a62ee12f16e01e64bd98/syntax/gas.vim#L1969 

; Lower priority to prefer @label when identifier appears in label.
((identifier) @field (#set! "priority" 95)) 
;(identifier) @field 

(comment) @comment @spell

;(block_name) @function

(block_type) @type
(text_block_type) @type
(const_type) @type

(func
  func_name: (identifier) @type)

(string) @string

(number) @constant

(ERROR) @error
