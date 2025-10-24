.PHONY: clean All

All:
	@echo "----------Building project:[ ReadingInputs - Debug ]----------"
	@cd "ReadingInputs" && "$(MAKE)" -f  "ReadingInputs.mk"
clean:
	@echo "----------Cleaning project:[ ReadingInputs - Debug ]----------"
	@cd "ReadingInputs" && "$(MAKE)" -f  "ReadingInputs.mk" clean
