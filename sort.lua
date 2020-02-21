#!/usr/bin/env lua
function main()

    local tab = {}
    local sorted_tab = {}
    local smallest = 1

    print("Unsorted list:")
    for _, val in pairs(arg) do             -- init table
        table.insert(tab, tonumber(val))    -- tonumber method also removes script name and interpreter from command lien argument bc you add nil in the end
        if (tonumber(val) ~= nil) then io.write(tab[#tab], " ") end
    end

    print("\nSorted list:")
    while #tab ~= 0 do
        for idx, v in pairs(tab) do
            if tab[smallest] > v then smallest = idx end
        end

        table.insert(sorted_tab, table.remove(tab, smallest))
        smallest = 1

        io.write(sorted_tab[#sorted_tab], " ")
    end
    print()
end

main()