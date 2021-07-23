.PHONY: clean All

All:
	@echo "----------Building project:[ Trivia - Debug ]----------"
	@cd "Trivia" && "$(MAKE)" -f  "Trivia.mk"
clean:
	@echo "----------Cleaning project:[ Trivia - Debug ]----------"
	@cd "Trivia" && "$(MAKE)" -f  "Trivia.mk" clean
