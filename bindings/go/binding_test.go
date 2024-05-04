package tree_sitter_userstory_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-userstory"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_userstory.Language())
	if language == nil {
		t.Errorf("Error loading Userstory grammar")
	}
}
