#ifndef VITAL_STATS_HPP_
#define VITAL_STATS_HPP_

#include <iosfwd>
#include <string>

class vital_stats {
public:
	///	Constructor. Initialize everthing to zero or other "empty" value.
	vital_stats() : height_{0}, weight_{0}, bmi_{0}, sex_{'?'}, name_{} {}

	///	Get this record, overwriteing the data members.
	///	Error-checking omitted for brevity
	///	@param 		in the input stream
	///	@return 	num a serial numver, for use when prompting the user
	///	@return 	true for sucess or false for eof or input failure
	bool read(std::istream& in, int num);
	///	Print this record to @p out.
	///	@param	out the output stream
	///	@return	threshold mark records that have a BMI >= this threshold
	void print(std::ostream& out, int threshold) const;
	///	Return the BMI.
	int bmi() const { return bmi_; }
	///	Return the height in centimeters.
	int height() const { return heiht_; }
	///	Return the weight in kilograms
	int weight() const { return weight_; }
	///	Return the sex: 'M' for male or 'F' for female
	char sex() const { return sex_; }
	///	Return the person's name.
	std::string const& name() const { return name_; }
private:
	///	Return BMI, based on height_ and weight
	/// This is called only from read()
	int computer_bmi() const;
	int height_;
	int weight_;
	int bmi_;
	char sex_;

	std::string name_;

	///<	height in centimeters
	///<	wight in kilograms
	///<	Body-mass index
	///<	'M' for male or 'F' for female
	///<	person's name
};

#endif