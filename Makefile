.PHONY: clean All

All:
	@echo "----------Building project:[ MinutesConvertion - Debug ]----------"
	@cd "MinutesConvertion" && "$(MAKE)" -f  "MinutesConvertion.mk"
clean:
	@echo "----------Cleaning project:[ MinutesConvertion - Debug ]----------"
	@cd "MinutesConvertion" && "$(MAKE)" -f  "MinutesConvertion.mk" clean
