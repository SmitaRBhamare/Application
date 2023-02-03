
  
  arr = ["cricket", "game", "celebrate", "chess", "safe"]
  word = arr.sample
  new_teaser = Array.new(word.length, "_")
  chances = 5

  puts "Game starts now....You have #{chances} chances"

  puts new_teaser.inspect 
    
  while chances > 0
      puts "Enter the letter"
      letter = gets.chomp()

      if letter == "exit"
        puts "Thank you for playing"
      elsif letter.length > 1
        puts "Only guess 1 letter at a time please!"
      elsif word.include?(letter)
        new_teaser.each_with_index do |value , index|
          new_teaser[index] = letter if word[index] == letter
        end
        puts new_teaser.inspect
              
        if word == new_teaser.join
          puts "Congratulations... you have won this round!"
          break
        end
      else   
        chances = chances -1
        if chances == 0
          puts "Game over... better luck next time!"
          break
        end
        puts "You have #{chances} chances" 
      end
  end
  
