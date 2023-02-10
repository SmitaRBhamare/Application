class Account
	attr_accessor :name , :account_num ,:mobile_num, :password , :transaction , :account_bal
	def initialize(name,account_num, mobile_num, password)
		@name = name
		@account_num = account_num
		@mobile_num = mobile_num
		@password = password
		@transaction = []
		@account_bal = 0
	end

	def display
		puts "Name: #{name} | Account Number :#{account_num}|Mobile number : #{mobile_num}| password: #{password}| transaction: #{transaction}| account bal: #{account_bal}" 
		puts accounts
	end

	def deposit(dep)
		@account_bal = @account_bal + dep
		time = Time.now
		transac =[dep, "credit", "self",@account_bal, time]
		transac = transaction.push(transac)  
	end

	def transfer(trans, acc)
		time = Time.now
		@account_bal = @account_bal - trans
		transac =[trans, "debit", acc.account_num,@account_bal,time]
		transac = @transaction.push(transac) 
		acc.account_bal=  acc.account_bal + trans 
		transaction =[trans, "credit", acc.account_num ,acc.account_bal,time]
		transac = acc.transaction.push(transaction)
	end
end
  
class Upi
	def start
		accounts = Hash.new
		while(1)
			puts "----------------------------------------------------------------------------------"
			puts "Press 1 : To create new account"
			puts "Press 2 : To enter into existing account"
			puts "Press 3 : To exit from the application"
			puts "----------------------------------------------------------------------------------"

			opt_number = gets.chomp
			case opt_number
			when "1" 
				puts "Enter the name"
				@user_name = gets.chomp
				puts "Enter the mobile number"
				@mob_no = gets.chomp.to_i
				puts "Enter the account number"
				@acc_no = gets.chomp
				puts "Enter the password"
				@password= gets.chomp
				account  = Account.new(@user_name, @acc_no, @mob_no, @password)
				#account.display
				accounts[@acc_no] = account 
				puts accounts
				
			when "2"
				puts "Enter account number"
				number= gets.chomp
				puts "Enter the password"
				pass= gets.chomp 
				
				acc = accounts[number]
				if acc && acc.password == pass
					puts "-----------------------------------------------------------------------------------"
					puts "Press 1 : To deposit account"
					puts "Press 2 : To transfer money"
					puts "Press 3 : To display account balance"
					puts "Press 4 : To display Transaction"
					puts "Press 5 : To exit from application"
					puts "-----------------------------------------------------------------------------------"
				else
					puts "Enter valid account number!"
					next
				end 
				
				while(1)
					options = gets.chomp
					case options 
				
					when "1"
						puts "Enter the amount that you want to deposit"
						trans = gets.chomp.to_i
						puts "Rupees #{trans} transferred in your account!"
						acc.deposit(trans)				
					when "2"
						puts "Enter account number to transfer money"
						account_no = gets.chomp
						trans_acc = accounts[account_no]
						if trans_acc
							puts "Enter the amount"
							amount_trans = gets.chomp.to_i
							if acc.account_bal < amount_trans
								puts "-----------------------------------------------------------------------------------"
								puts "Account balace is low" 
								puts "-----------------------------------------------------------------------------------"
							else
								puts "Trasferred  rupees #{amount_trans}  to #{account_no}"
								acc.transfer(amount_trans,trans_acc)
							end
						else
							puts "-----------------------------------------------------------------------------------"
							"Enter valid account number"
							puts "-----------------------------------------------------------------------------------"
						end 
					when "3"
						trans = Transaction.new
						trans.display_dep(acc)
					when "4"
						trans = Transaction.new
						acc = accounts[number]
						trans.display_transfer(acc)
					when "5"
						puts "-----------------------------------------------------------------------------------"
						puts "Thank for using application!"
						break
						puts "-----------------------------------------------------------------------------------"
					else
						puts "-----------------------------------------------------------------------------------"
						"Please enter valid number!"
						break
						puts "-----------------------------------------------------------------------------------"
				
					end  
				end    
			when "3"
				puts "-----------------------------------------------------------------------------------"
				puts "Thank you for using application"
				exit
				puts "-----------------------------------------------------------------------------------"
			else
				puts "-----------------------------------------------------------------------------------"
				"Please enter valid number!"
				
				puts "-----------------------------------------------------------------------------------"
			end 
		end
	end
end

  
class Transaction

	def display_dep(account_num)
		puts "-----------------------------------------------------------------------------------"
		puts "Account balance : #{account_num.account_bal}" 
		puts "-----------------------------------------------------------------------------------"
	end

	def display_transfer(account_num)
		puts "-----------------------------------------------------------------------------------"
		account_num.transaction.each {|x|
			puts  "#{x.last}|#{x[2]} |#{x.first}|#{x[1]}|account balance:#{x[3]}}"
		}
		puts "-----------------------------------------------------------------------------------"
	end
end
  
Upi.new.start
  
  