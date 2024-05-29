package tree_sitter_alan_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-alan"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_alan.Language())
	if language == nil {
		t.Errorf("Error loading Alan grammar")
	}
}
