local M = {}

local function get_root()
	local root_dir = ""
	for dir in vim.fs.parents(vim.api.nvim_buf_get_name(0)) do
		if vim.fn.isdirectory(dir .. "/.git") == 1 then
			root_dir = dir
			break
		end
	end
	return root_dir
end

function M.setup()
	local name = "userstory"
	require "nvim-treesitter.parsers".get_parser_configs()[name] = {

		install_info = {
			url = get_root(),
			files = { "src/parser.c" }
		}
	}
	vim.treesitter.language.register(name, name)
	vim.filetype.add({
		extension = {
			[name] = name,
		},
	})

	vim.api.nvim_set_hl(0, "@role", { fg = "#fabd2f" })
	vim.api.nvim_set_hl(0, "@req", { fg = "#fb4934" })
	vim.api.nvim_set_hl(0, "@reason", { fg = "#689d6a" })
end

return M
