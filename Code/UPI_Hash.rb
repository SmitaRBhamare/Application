accounts = Hash.new
while(1)

  puts "-----------------------------------------------------------------------------------"
  puts "Press 1 : To create new account"
  puts "Press 2 : To enter into existing account"
  puts "Press 3 : To exit from the application"
  puts "-----------------------------------------------------------------------------------"
  opt_number = gets.chomp
  case opt_number

  when "1" 
    puts "Enter the mobile number"
    mob_num= gets.chomp.to_i
    puts "Enter the account number"
    acc_num= gets.chomp
    puts "Enter the password"
    password = gets.chomp
    acc_bal = 0
   
    accounts[acc_num] = {"mobile_num"=>mob_num, "password"=>password, "account_bal"=>acc_bal, "transaction"=> []}
    
    puts accounts

    # puts "Enter the account number of which you want information"
    # acc_num = gets.chomp

    # puts account[acc_num]

  when "2"
    puts "Enter account number"
    number= gets.chomp
    puts "Enter the password"
    password = gets.chomp
  
    account = accounts[number]
    if account && account["password"] == password
        puts "-----------------------------------------------------------------------------------"
        puts "Press 1 : To deposit account"
        puts "Press 2 : To transfer money"
        puts "Press 3 : To display account balance"
        puts "Press 4 : To display Transaction"
        puts "Press 5 : To exit from application"
        puts "-----------------------------------------------------------------------------------"
    else
      "Enter valid account number!"
      break
    end
  
    while(1) 
      options = gets.chomp
      case options 
    
      when "1"
        puts "Enter the amount that you want to deposit"
        trans = gets.chomp.to_i
        puts "Rupees #{trans} transferred in your account!"
        time = Time.now
        acc_no = accounts.fetch(number)
        acc_no["account_bal"] = acc_no["account_bal"] + trans
        transaction =[trans,"credited", "self",acc_no["account_bal"],time]
        acc_no["transaction"]<<transaction
      when "2"
        puts "Enter account number to transfer money"
        account_no = gets.chomp
        
        account = accounts[account_no]
          if account
            puts "Enter the amount"
            @amount_trans = gets.chomp.to_i
            acc_no = accounts.fetch(number)
            if acc_no["account_bal"] < @amount_trans
              puts "-----------------------------------------------------------------------------------"
              puts "Account balace is low" 
              puts "-----------------------------------------------------------------------------------"
            else
              puts "Trasferred  rupees #{@amount_trans}  to #{account_no}"
              time = Time.now
              acc_no["account_bal"]=  acc_no["account_bal"] - @amount_trans 
              transaction=[@amount_trans,"transferred",account_no,acc_no["account_bal"],time]
              acc_no["transaction"]<<transaction
              acc = accounts.fetch(account_no)
              acc["account_bal"]=  acc["account_bal"] + @amount_trans 
              transaction=[@amount_trans,"credited",acc["account_bal"],time] 
              acc["transaction"]<<transaction
            end
          else
            puts "-----------------------------------------------------------------------------------"
            "Enter valid account number"
            break
            puts "-----------------------------------------------------------------------------------"
          end 
      when "3"
        acc_no = accounts.fetch(number)
        puts "Account balance : #{acc_no["account_bal"]}" 
      when "4"
        puts "-----------------------------------------------------------------------------------"
        acc_no = accounts.fetch(number)
        trans = acc_no.fetch("transaction")
        trans.each {|x|
          puts  "#{x.last}|#{x[2]} |#{x.first}|#{x[1]}|account balance:#{x[3]}}"
        }
        puts "-----------------------------------------------------------------------------------"
      when "5"
        puts "-----------------------------------------------------------------------------------"
        puts "Thank for using application!"
        break
        puts "-----------------------------------------------------------------------------------"
      else
        puts "-----------------------------------------------------------------------------------"
        "Please enter valid number!"
        puts "-----------------------------------------------------------------------------------"
        break
      end  
    end
  when "3"
    puts "-----------------------------------------------------------------------------------"
    puts "Thank you for using application"
    puts "-----------------------------------------------------------------------------------"
    break
  else
    puts "-----------------------------------------------------------------------------------"
    "Please enter valid number!"
    puts "-----------------------------------------------------------------------------------"
    break
  end
end
