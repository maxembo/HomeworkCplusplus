#include <iostream>
#include <vector>

class Components
{
protected:
	bool visible;
	Components* parent;
	std::vector <Components*> children;
	std::vector <Components*>::iterator iter;

public:

	void AddComponent(Components* component)
	{
		children.push_back(component);
		component->SetParent(this);
	}

	void RemoveComponent(Components* component)
	{
		iter = find(children.begin(), children.end(), component);
		if (iter != children.end())
		{
			children.erase(iter);
			component->SetParent(nullptr);
		}
	}

	Components() : visible(true), parent(nullptr) {}

	virtual ~Components() {}

	bool GetVisible() const { return visible; }

	void SetVisible(bool setVis) { visible = setVis; }

	void SetParent(Components* setPar) { parent = setPar; }

	virtual void Print() const = 0;

};

class Window : public Components
{
public:
	void Print() const override
	{
		if (!GetVisible()) return;

		std::cout << "\nWindow" << std::endl;

		for (auto child : children)
			child->Print();
	}
};

class Panel : public Components
{
public:
	void Print() const override
	{
		if (!GetVisible()) return;

		std::cout << "\nPanel" << std::endl;

		for (auto child : children)
			child->Print();
	}
};

class Inscription : public Components
{
public:
	void Print() const override
	{
		if (!GetVisible()) return;

		std::cout << " Inscription" << std::endl;
	}
};

class List : public Components
{
public:
	void Print() const override
	{
		if (!GetVisible()) return;

		std::cout << " List" << std::endl;
	}
};

class Button : public Components
{
public:
	void Print() const override
	{
		if (!GetVisible()) return;

		std::cout << " Button" << std::endl;
	}
};


class Line : public Components
{
public:
	void Print() const override
	{
		if (!GetVisible()) return;

		std::cout << " Line" << std::endl;
	}
};
