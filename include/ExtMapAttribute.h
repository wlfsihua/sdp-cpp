#ifndef _SDP_EXT_MAP_ATTRIBUTE_H_
#define _SDP_EXT_MAP_ATTRIBUTE_H_

#include <string>

#include "Attribute.h"


namespace sdp
{

class ExtMapAttribute :
	public Attribute
{
public:
	ExtMapAttribute() = default;

	ExtMapAttribute(int id, const std::string& name)
	{
		this->id = id;
		this->name = name;
	}

	ExtMapAttribute(int id, const std::string&, const std::string& name, const std::string& attributes)
	{
		this->id = id;
		this->direction = direction;
		this->name = name;
		this->attributes = attributes;
	}

	virtual std::shared_ptr<Attribute> clone() override
	{
		return std::make_shared<ExtMapAttribute>(id, direction, name, attributes);
	}

	virtual std::string getField() override
	{
		return "extmap";
	}

	virtual std::string getValue() override
	{
		return id + (!direction.empty() ? "/" + direction : "") + " " + name + (!attributes.empty() ? " " + attributes : "");
	}

	virtual std::string toString() override
	{
		//Get value
		std::string value = getValue();
		//Generic attr
		return "a=" + getField() + (!value.empty() ? ":" + value : "") + "\r\n";
	}

	std::string getDirection()
	{
		return direction;
	}

	void setDirection(const std::string& direction)
	{
		this->direction = direction;
	}

	int getId()
	{
		return id;
	}

	void setId(int id)
	{
		this->id = id;
	}

	std::string getName()
	{
		return name;
	}

	void setName(const std::string& name)
	{
		this->name = name;
	}

	std::string getAttributes()
	{
		return attributes;
	}

	void setAttributes(const std::string& attributes)
	{
		this->attributes = attributes;
	}

private:
	int id = 0;
	std::string direction;
	std::string name;
	std::string attributes;

};

}
#endif
