#pragma once

#include <ostream>

namespace cinder { namespace modestmaps {

class Location {
	
public:
	double lat, lon;
	
	Location() : lat(0), lon(0) {}
	
	Location(double _lat, double _lon) : lat(_lat), lon(_lon) {}
	
	Location(const Location &location) : lat(location.lat), lon(location.lon) {}
	
	friend std::ostream &operator<<(std::ostream &stream, const Location &l) {
		// TODO: number format
		stream << "(" << l.lat << ", " << l.lon << ")";
		return stream;
	}
	
    bool operator == (const Location &l) const
    {
        return l.lat == lat && l.lon == lon;
    }
	
};

} } // namespace